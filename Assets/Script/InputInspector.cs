using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputInspector : MonoBehaviour
{

    [SerializeField]
    private int subject_id;

    [SerializeField]
    private int trial_id;

    [SerializeField]
    private int min_value;

    [SerializeField]
    private int max_value;


    public static int _subject_id;
    public static int _trial_id;
    public static int _min_value;
    public static int _max_value;



    public enum InputMethod { Head_Gaze, Eye_Gaze}
    [SerializeField]
    private InputMethod inputMethod;
    public static string gazeInputMethod;

    public enum CursorEnabled { Yes, No}
    [SerializeField]
    private CursorEnabled cursorEnabled;
    public static int _cursorEnabled;


    // Start is called before the first frame update
    void Start()
    {
        if (inputMethod == InputMethod.Head_Gaze)
        {
            gazeInputMethod = "Head-Gaze";
        }

        if (inputMethod == InputMethod.Eye_Gaze)
        {
            gazeInputMethod = "Eye-Gaze";
        }

        _subject_id = subject_id;
        _trial_id = trial_id;

        _min_value = min_value;
        _max_value = max_value;

        Debug.Log(_min_value);
        Debug.Log(_max_value);

        if (cursorEnabled == CursorEnabled.Yes)
        {
            _cursorEnabled = 1;
        }
        if (cursorEnabled == CursorEnabled.No)
        {
            _cursorEnabled = 0;
        }
        Debug.Log(InputInspector._cursorEnabled);
        Debug.Log(_cursorEnabled);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
