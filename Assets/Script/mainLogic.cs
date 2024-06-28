using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.IO;
using MixedReality.Toolkit.UX;

public class mainLogic : MonoBehaviour
{
    public GameObject firstButton;
    public GameObject secondButton;
    public GameObject thirdButton;
    public GameObject fourthButton;
    private string csvFilePath;
    private float startTime = -1f; // Initialize start time
    public TMP_InputField inputField_personID;

    void Start()
    {
        csvFilePath = Path.Combine(Application.dataPath, "button_coordinates_time_taken.csv");
        Debug.Log(csvFilePath);


    }

    public void OnInputFieldSelected()
    {
        TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false);
    }

    public void OnButtonClick()
    {
        if (inputField_personID != null)
        {
            string enteredText = inputField_personID.text;

            // Do something with the entered text, like printing it to the console
            Debug.Log("Entered Name: " + enteredText);
        }
        else
        {
            Debug.LogWarning("TMP InputField reference missing!");
        }
    }

    public void OnFirstButtonGaze()
    {
        Vector3 buttonPosition = firstButton.transform.position;
        Debug.Log("Button Coordinates 1st Button: " + buttonPosition);
        WriteCoordinatesToFile(buttonPosition, "1st Button");


        if (startTime < 0f) // Start timing if it hasn't started yet
        {
            startTime = Time.time;
        }
        Debug.Log(startTime);

    }

    public void OnSecondButtonGaze()
    {
        Vector3 buttonPosition = secondButton.transform.position;
        Debug.Log("Button Coordinates 2nd Button: " + buttonPosition);
        WriteCoordinatesToFile(buttonPosition, "2nd Button");
    }

    public void OnThirdButtonGaze()
    {
        Vector3 buttonPosition = thirdButton.transform.position;
        Debug.Log("Button Coordinates 3rd Button: " + buttonPosition);
        WriteCoordinatesToFile(buttonPosition, "3rd Button");
    }

    public void OnFourthButtonGaze()
    {
        Vector3 buttonPosition = fourthButton.transform.position;
        Debug.Log("Button Coordinates 4th Button: " + buttonPosition);
        WriteCoordinatesToFile(buttonPosition, "4th Button");

        //if (startTime >= 0f) // Stop timing if it has started
        //{
            float endTime = Time.time;
            float totalTime = endTime - startTime;
            WriteTotalTime(totalTime);
            startTime = -1f; // Reset start time
            //playbackActive = false;
        //}
    }

    private void WriteCoordinatesToFile(Vector3 position, string buttonName)
    {
        string data = $"{buttonName}, {position.x}, {position.y}, {position.z}\n";

        if (!File.Exists(csvFilePath))
        {
            File.WriteAllText(csvFilePath, "Button, X, Y, Z\n");
        }

        File.AppendAllText(csvFilePath, data);
    }

    private void WriteTotalTime(float totalTime)
    {
        string timeData = $"Total Time Taken, {totalTime}\n";

        if (!File.Exists(csvFilePath))
        {
            File.WriteAllText(csvFilePath, "Time Type, Time\n");
        }

        File.AppendAllText(csvFilePath, timeData);
    }
}
