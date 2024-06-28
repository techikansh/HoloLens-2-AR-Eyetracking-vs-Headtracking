using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.XR.WSA.Input;
using MixedReality.Toolkit.Input;
using UnityEngine.XR.WSA;
using System.Threading;


public class Logger : MonoBehaviour
{
    private int subject_id;
    private int trial_id;

    //private string inputMethod = InputInspector.gazeInputMethod;
    //private string inputMethod = "Head-Gaze";
    //private string inputMethod = "Eye-Gaze";

    private string panel_1_id;
    private string panel_2_id;
    private string panel_3_id;
    private string panel_4_id;
    private string panel_5_id;
    private string panel_6_id;
    private string panel_7_id;
    private string panel_8_id;
    private string panel_9_id;
    
    [SerializeField]
    private GazeInteractor gazeInteractor;

    private double fetchedResult;
    private double minValue, maxValue, adjustedMaxValue, adjustedMinValue;
    public GameObject secondTarget;
    private bool isLookingAtTarget = false;
    private string buttonName;
    public static int firstButtonClickedCount = 0;
    public Color hoverColor = Color.green; 
    private Color originalColor; 
    private Renderer renderer;
    private Vector3 gazeCoordinates;
    private Vector3 headGazeCoordinates = Vector3.zero;
    private Vector3 eyeGazeCoordinates = Vector3.zero;
    public static Vector3 previousTargetposition;
    //public GameObject currentPanel;

    private string cursorEnabled;

    // Start is called before the first frame update
    void Start()
    {
        subject_id = InputInspector._subject_id;
        trial_id = InputInspector._trial_id;
        
        minValue = InputInspector._min_value;
        maxValue = InputInspector._max_value;

        adjustedMaxValue = ((maxValue - 510) * 0.8) + 510;
        adjustedMinValue = (minValue) + ((minValue - 510) * 0.2);

        renderer = GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {
        fetchedResult = EMG.fetchedResult;
        if(fetchedResult < 510)
        {
            fetchedResult = 510 + (510 - fetchedResult);
        }

        if (InputInspector._cursorEnabled == 1)
        {
            cursorEnabled = "Yes";
        }
        else {
            cursorEnabled = "No";
        }

    }


    public void onHover()
    {

        panel_1_id = IdCalculator.panel_1_id.ToString("F1");
        panel_2_id = IdCalculator.panel_2_id.ToString("F1");
        panel_3_id = IdCalculator.panel_3_id.ToString("F1");
        panel_4_id = IdCalculator.panel_4_id.ToString("F1");
        panel_5_id = IdCalculator.panel_5_id.ToString("F1");
        panel_6_id = IdCalculator.panel_6_id.ToString("F1");
        panel_7_id = IdCalculator.panel_7_id.ToString("F1");
        panel_8_id = IdCalculator.panel_8_id.ToString("F1");
        panel_9_id = IdCalculator.panel_9_id.ToString("F1");

        // Get the name of the button
        buttonName = gameObject.name;

        isLookingAtTarget = true;
        // Change the color to the hover color when hovered
        renderer.material.color = hoverColor;

        StartCoroutine(CheckEMGSignal());

    }

    private IEnumerator CheckEMGSignal()
    {
        while (isLookingAtTarget)
        {
            //Debug.Log("Amax: " + adjustedMaxValue);
            //Debug.Log("Amin: " + adjustedMinValue);

            if (fetchedResult > adjustedMaxValue)
            {

                if (InputInspector.gazeInputMethod == "Head-Gaze")
                {
                    //print(InputInspector.gazeInputMethod);
                    gazeCoordinates = GazeCursor.headGazeCoordinates;
                    //Debug.Log("Head-gaze coordinates: " + gazeCoordinates);

                }

                //Eye-gaze code
                if (InputInspector.gazeInputMethod == "Eye-Gaze") {
                    gazeCoordinates = GazeCursor.eyeGazeCoordinates;
                }
                
                Vector3 buttonPosition = transform.position;
                float currentTime = Time.time;
                //Debug.Log("previousTargetposition before line: " + Logger.previousTargetposition);
                Debug.Log($"Mouse hovered over button '{buttonName}' at position {buttonPosition} at time {currentTime} with id {panel_1_id} with gaze coordinates: {gazeCoordinates}, with previous target coordinates: {previousTargetposition}");


                if (buttonName.EndsWith("Target-1")) {
                    firstButtonClickedCount++;
                    Debug.Log("firstButtonClickedCount: " + firstButtonClickedCount);
                }




                // Activate the second target
                //if (firstButtonClickedCount % 2 != 0)
                //{
                //    secondTarget.SetActive(true);
                //}
                

                // Break out of the loop when the condition is met
                isLookingAtTarget = false;

                if (buttonName.StartsWith("Panel-1-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_1_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-2-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_2_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-3-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_3_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-4-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_4_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-5-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_5_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-6-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_6_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-7-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_7_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-8-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_8_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                if (buttonName.StartsWith("Panel-9-Target-"))
                {
                    LogToCSV(buttonName, buttonPosition, currentTime, panel_9_id, gazeCoordinates, InputInspector.gazeInputMethod, trial_id, Logger.previousTargetposition, cursorEnabled);
                }

                previousTargetposition = buttonPosition;
                //Debug.Log("previousTargetposition: " + previousTargetposition);

                if (firstButtonClickedCount == 2)
                {
                    gameObject.SetActive(false);
                    break;
                }


                if (!buttonName.EndsWith("Target-1"))
                {
                    yield return StartCoroutine(_ActivateSecondTarget());
                }
                
                // Activate the second target if conditions met
                if (buttonName.EndsWith("Target-1"))
                {
                    yield return StartCoroutine(ActivateSecondTarget());
                }

            }         

            // Adjust the WaitForSeconds value based on your desired frequency of checks
            yield return new WaitForSeconds(0.01f);
        }
    }

    private IEnumerator ActivateSecondTarget()
    {
        while (true)
        {
            //Debug.Log("fetchedResult: " + fetchedResult);
            //Debug.Log("adjustedMinValue: " + adjustedMinValue);
            double _fetchedResult = fetchedResult;
            if (_fetchedResult < adjustedMinValue && firstButtonClickedCount % 2 != 0)
            {
                Debug.Log("_fetchedResult: " + _fetchedResult);
                Debug.Log("Min: " + adjustedMinValue);
                gameObject.SetActive(false);
                secondTarget.SetActive(true);
                break;
            }

            // Wait for a short duration before checking the condition again
            yield return new WaitForSeconds(0.01f);
        }
    }

    private IEnumerator _ActivateSecondTarget()
    {
        while (true)
        {
            //Debug.Log("fetchedResult: " + fetchedResult);
            //Debug.Log("adjustedMinValue: " + adjustedMinValue);

            double _fetchedResult = fetchedResult;
            if (_fetchedResult < adjustedMinValue)
            {
                Debug.Log("_fetchedResult: " + _fetchedResult);
                Debug.Log("Min: " + adjustedMinValue);
                gameObject.SetActive(false);
                secondTarget.SetActive(true);
                break;
            }

            // Wait for a short duration before checking the condition again
            yield return new WaitForSeconds(0.01f);
        }
    }


    public void OnHoverEnd()
    {
        // Reset the flag when the user is no longer looking at the target
        isLookingAtTarget = false;
        renderer.material.color = originalColor;

/*        if (firstButtonClickedCount % 2 == 0 && firstButtonClickedCount != 0)
        {
            currentPanel.SetActive(false);
        }*/
    }

    public void LogToCSV(string buttonName, Vector3 buttonPosition, float currentTime, string fitts_law_id, Vector2 gazeCoordinates, 
                        string inputMethod, int trial_id, Vector3 previousTargetPosition, string cursor)
    {
        // Specify the path to your CSV file.
        string filePath = Path.Combine(Application.dataPath, "Unity-logs.csv");

        // Check if the file exists; if not, create it and add header.
        if (!File.Exists(filePath))
        {
            using (StreamWriter writer = new StreamWriter(filePath))
            {
                writer.WriteLine("Time,subjectID,TrialID,FittsLaw-Id,ButtonName,Target-X,Target-Y,Input-Method,GazeCoordinates-X,GazeCoordinates-Y,Previous-Target-X,Pervious-Target-Y,Cursor");
            }
        }

        // Append the data to the CSV file.
        using (StreamWriter writer = new StreamWriter(filePath, true))
        {
            writer.WriteLine($"{currentTime},{subject_id},{trial_id},{fitts_law_id},{buttonName},{buttonPosition.x},{buttonPosition.y},{inputMethod},{gazeCoordinates.x},{gazeCoordinates.y},{previousTargetPosition.x},{previousTargetPosition.y},{cursor}");
        }
    }
}
