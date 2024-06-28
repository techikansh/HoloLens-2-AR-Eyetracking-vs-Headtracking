#!/usr/bin/env python

import socket

import json
import ast
import threading
import select
import queue
import pandas as pd
import numpy as np


def show_menu():
    for id in MENU_IMPUT.keys():
        print(str(id) + ' | ' + MENU_IMPUT[id])

def action_decode(action):
    if action == '0':
        return 'devices'
    elif action == '1':
        device = str(input('MAC or DEVICE_ID: '))
        return 'config,' + device
    elif action == '2':
        device = str(input('MAC or DEVICE_ID: '))
        param = str(input('Param (samplingfreq | activechannels): '))
        value = str(input('Value: '))
        return 'config,' + device + ',' + param + ',' + value
    elif action == '3':
        device = str(input('MAC or DEVICE_ID: '))
        return 'enable,' + device
    elif action == '4':
        device = str(input('MAC or DEVICE_ID: '))
        return 'disable,' + device
    elif action == '5':
        return 'start'
    elif action == '6':
        device = str(input('MAC or DEVICE_ID: '))
        channel = str(input('Number of the digital output channel: '))
        state = str(input('Enable (1) or disable (0) digital output channel?: '))
        return 'set_digital_output_channel,' + device + ',' + channel + ',' + state
    elif action == '7':
        return 'stop'
    elif action == '8':
        return ''
    else:
        return ''

class TCPClient(object):
    def __init__(self):
        self.tcpIp = '127.0.0.1'
        self.tcpPort = 5555
        self.buffer_size = 99999

        self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.inputCheck = []
        self.outputCheck = []
        self.isChecking = False
        self.isAcquiring = False
        self.msgQueue = queue.Queue()

        self.txtFile = SaveAcquisition()

        # 1234 code
        self.sendSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sendSocket.connect(('127.0.0.1', 1234))  # Connect to port 1234


    def connect(self):
        self.socket.connect((self.tcpIp, self.tcpPort))
        self.outputCheck.append(self.socket)
        self.isChecking = True

    def start(self):
        thread = threading.Thread(target=self.msgChecker)
        thread.daemon = True
        thread.start()

    def stop(self):
        self.isChecking = False
        self.socket.close()

        # 1234 code
        self.sendSocket.close()  # Close the sending socket for port 123

    def msgChecker(self):
        while self.isChecking:
            readable, writable, exceptional = select.select(self.inputCheck, self.outputCheck, self.inputCheck)
            for s in readable:
                message = s.recv(self.buffer_size)
                if not self.isAcquiring:
                    print(message)
                    self.inputCheck = []
                else:
                    print(message)
                    message = json.loads(message)
                    message = message["returnData"]
                    
                    # 1234 code
                    # self.sendSocket.sendall(message)  # Send data to port 1234
                    # json_message = json.dumps(message)
                    # bytes_message = json_message.encode('utf-8')
                    # self.sendSocket.sendall(bytes_message)

                    if not self.txtFile.getHasHeader():
                        newLine = json.dumps(message) + "\n"
                        self.txtFile.addData(newLine)
                    else:
                        dataframe = []
                        for device in message.keys():
                            try:
                                
                                dataframe.append(pd.DataFrame(message[device]))
                            except:
                                dataframe.append(pd.Series(message[device]))
                        dataframe = pd.concat(dataframe, axis=1, ignore_index=True)

                        #print(f'Hallo : {dataframe['column']}')

                        #values_with_key_2 = [item["2"] for item in dataframe]
                        #print(values_with_key_2)

                        #dataframe.to_excel("Output", index=False)
                        # print(f"dataframe : {dataframe}")
                        

                        # print(f"hallo : {dataframe}")
                        # json_message = json.dumps(dataframe)
                        json_message = json.dumps(dataframe.to_dict(orient='records'))
                        #print(type(json_message))

                        #values_with_key_2 = [item["2"] for item in json_message]
                        #print(values_with_key_2)
                        #print(f"Devansh: {json_message}")

                        bytes_message = json_message.encode('utf-8')

                        # print(f"Devansh byte message: {bytes_message}")
                        #values_with_key_2 = [item["2"] for item in bytes_message]
                        #print(f"Devansh: {values_with_key_2}")

                        self.sendSocket.sendall(bytes_message)
                        #size_bytes = len(bytes_message).to_bytes(4, byteorder='big')  # Assuming 4 bytes for size
                        #self.sendSocket.sendall(size_bytes + bytes_message)

                        for line in dataframe.values:
                            self.txtFile.addData('\n')
                            self.txtFile.addData(",".join([str(x) for x in line]))

            for s in writable:
                try:
                    next_msg = self.msgQueue.get_nowait()
                except queue.Empty:
                    pass
                else:
                    # print("send ")
                    self.socket.send(str(next_msg).encode())

            for s in exceptional:
                print("exceptional ", s)

    def addMsgToSend(self, data):
        self.msgQueue.put(data)
        if self.socket not in self.outputCheck:
            self.outputCheck.append(self.socket)
        if self.socket not in self.inputCheck:
            self.inputCheck.append(self.socket)

    def setIsAcquiring(self, isAcquiring):
        self.isAcquiring = isAcquiring
        if self.isAcquiring:
            self.txtFile = SaveAcquisition()
            self.txtFile.start()
        else:
            self.txtFile.stop()

class SaveAcquisition(object):
    def __init__(self):
        self.fileTxt = None
        self.hasHeader = False

    def start(self):
        self.fileTxt = open("tct_Acquisition.txt", "w")
        pass

    def addData(self, data):
        self.fileTxt.write(data)
        self.hasHeader = True

    def stop(self):
        self.fileTxt.close()
        print("Stop")

    def getHasHeader(self):
        return self.hasHeader



if __name__ == "__main__":
    MENU_IMPUT = {0: 'devices',
                  1: 'config,{MAC|DEVICE_ID}',
                  2: 'config,{MAC|DEVICE_ID}, {PARAM}, {VALUE}',
                  3: 'enable,{MAC|DEVICE_ID}',
                  4: 'disable,{MAC|DEVICE_ID}',
                  5: 'start',
                  6: 'set_digital_output, {MAC|DEVICE_ID}, {CHANNEL}, {STATE}',
                  7: 'stop',
                  8: 'exit'
                  }

    CONNECTION = TCPClient()
    CONNECTION.connect()
    CONNECTION.start()
    while True:
        show_menu()
        user_action = str(input('New action: '))
        if user_action == '5':
            CONNECTION.setIsAcquiring(True)
        elif user_action == '7':
            CONNECTION.setIsAcquiring(False)
        elif user_action == '8':
            CONNECTION.stop()
            break
        new_msg = action_decode(user_action)
        CONNECTION.addMsgToSend(new_msg)

    print("END")

#tcp_ip_client_sample.py | 2019-08-01