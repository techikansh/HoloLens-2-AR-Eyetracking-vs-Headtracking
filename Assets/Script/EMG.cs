using System.IO;
using UnityEngine;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using System.Collections.Generic;



public class EMG : MonoBehaviour
{
    TcpListener server;
    bool isServerRunning = false;
    public static double fetchedResult;
   

private void Start()
{
    StartServer();
}

private void Update()
{
    if (isServerRunning)
    {
        // Perform any server-related tasks here if needed
    }
}

public void StartServer()
{
    try
    {
        // Set the IP address and port.
        IPAddress localAddr = IPAddress.Parse("127.0.0.1");
        int port = 1234;

        // TcpListener listens for incoming connections.
        server = new TcpListener(localAddr, port);

        // Start listening for client requests.
        server.Start();

        Debug.Log("Server started. Waiting for a connection...");

        isServerRunning = true;

        // Start accepting connections in a separate thread
        AcceptConnections();
    }
    catch (SocketException e)
    {
        Debug.Log($"SocketException: {e}");
    }
}

private async void AcceptConnections()
{
    try
    {
        while (true)
        {
            try
            {
                // Accept the pending client connection and return a TcpClient object
                TcpClient client = await server.AcceptTcpClientAsync();
                Debug.Log("Connected!");
                
                // Handle client connection in a separate thread or coroutine
                _ = Task.Run(() => HandleClient(client));
            }
            catch
            {
                break;
            }
        }
    }
    catch (SocketException e)
    {
        Debug.Log($"SocketException: {e}");
    }
}

private async void HandleClient(TcpClient client)
{
    try
    {
        NetworkStream stream = client.GetStream();

            double minValue = 500.0;
            double maxValue = 560.0;
            double adjustedMaxValue = (maxValue - 500) * 0.8 + 500;
            

            //string filePath = Path.Combine(Application.dataPath, "EMG-Logs.csv");

/*        using (StreamWriter writer = new StreamWriter(filePath))*/
            //{

                while (true)
                {
                    byte[] bytes = new byte[1024];
                    int bytesRead = await stream.ReadAsync(bytes, 0, bytes.Length);

                    if (bytesRead == 0)
                    {
                        // No more data to read, break the loop
                        break;
                    }

                    string dataReceived = Encoding.ASCII.GetString(bytes, 0, bytesRead);
                    string[] values = dataReceived.Split(',');
                    foreach (string value in values)
                    {
                        if (value.Contains("\"5\":"))
                        {
                            string s = value.Substring(value.IndexOf(":") + 1).Trim();


                        // Convert the string to double
                        /*                            if (double.TryParse(s, out double result))
                                                    {*/
                        //Devansh's code
                        double.TryParse(s, out double result);
                                //Debug.Log("Gujju's result: " + result);
                                fetchedResult = result;
                                //result = result - 500.0;

                                // Update min and max values
                                minValue = Math.Min(minValue, result);
                                maxValue = Math.Max(maxValue, result);


/*                                if (result > adjustedMaxValue)
                                {
                                    Debug.Log($"{clicked}");
                                    writer.WriteLine(clicked);
                                }*/

                                // Write the converted value to the logfile
                                //writer.WriteLine(result);
                                    

                                //Type type1 = result.GetType();

                                // Print to Debug.Log
                                //Debug.Log($"{result}");

                            //}
/*                            else
                            {
                                // Handle conversion failure if needed
                                Debug.LogError($"Failed to convert '{s}' to double.");
                            }*/
                        }
                    }
                    // After the loop, you can access minValue and maxValue
                    //Debug.Log($"Minimum value: {minValue}");
                    //Debug.Log($"Maximum value: {maxValue}");
                    
                    //Debug.Log($"adjustedMaxValue: {adjustedMaxValue}");

                }
               
        //}
            

        stream.Close();
        client.Close();
    }
    catch (Exception e)
    {
        Debug.Log($"Exception: {e}");
    }
}
private void OnDestroy()
{
    if (isServerRunning)
    {
        server.Stop();
        isServerRunning = false;
        //Debug.Log($"Connection Ended!!!");
    }
}
}