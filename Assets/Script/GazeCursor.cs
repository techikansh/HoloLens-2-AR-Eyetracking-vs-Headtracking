using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MixedReality.Toolkit.Input;

public class GazeCursor : MonoBehaviour
{
    // The cursor prefab to use
    public GameObject cursorPrefab;

    // The eye gaze provider
    public GazeInteractor gazeInteractor;

    // The instantiated cursor object
    private GameObject cursor;

    // The head gaze direction
    private Vector3 headGazeDirection;


    public static Vector3 headGazeCoordinates;
    public static Vector3 eyeGazeCoordinates;

    // Start is called before the first frame update
    void Start()
    {
        // Instantiate the cursor prefab
        cursor = Instantiate(cursorPrefab);

        // Set the cursor as a child of the main camera
        cursor.transform.parent = transform;
        //Debug.Log(InputInspector._cursorEnabled);

    }

    // Update is called once per frame
    void Update()
    {
        if (InputInspector._cursorEnabled == 0)
        {
            Renderer renderer = cursor.GetComponent<Renderer>();
            renderer.enabled = false;
        }
        // Check if the gaze interactor is available and enabled
        if (gazeInteractor != null & InputInspector.gazeInputMethod == "Eye-Gaze")
        {
            // Get the ray origin and direction from the gaze interactor
            var ray = new Ray(gazeInteractor.rayOriginTransform.position,
                            gazeInteractor.rayOriginTransform.forward * 3);

            // Raycast from the ray origin along the ray direction
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                // If the ray hits something, set the cursor position and rotation to the hit point and normal
                eyeGazeCoordinates = hit.point;
                //if (InputInspector._cursorEnabled == 1) {
                    cursor.transform.position = hit.point;
                    cursor.transform.rotation = Quaternion.LookRotation(hit.normal);
                //}
               
            }
            else
            {
                //if (InputInspector._cursorEnabled == 1) {
                    // If the ray does not hit anything, set the cursor position and rotation to a default distance and orientation
                    cursor.transform.position = ray.origin + ray.direction * 3f;
                    cursor.transform.rotation = Quaternion.LookRotation(ray.direction);
                //}
                
            }
        }


        if (InputInspector.gazeInputMethod == "Head-Gaze") {

            // Get the head gaze direction from the main camera
            headGazeDirection = Camera.main.transform.forward;

            // Create a ray from the head gaze origin and direction
            Ray headGazeRay = new Ray(Camera.main.transform.position, headGazeDirection);

            // Raycast from the head gaze origin along the head gaze direction
            RaycastHit head_hit;
            if (Physics.Raycast(headGazeRay, out head_hit))
            {
                // If the ray hits something, set the cursor position and rotation to the hit point and normal
                headGazeCoordinates = head_hit.point;
                //if (InputInspector._cursorEnabled == 1) { 
                    cursor.transform.position = head_hit.point;
                    cursor.transform.rotation = Quaternion.LookRotation(head_hit.normal);
                //}
            }
            else
            {
                //if (InputInspector._cursorEnabled == 1){
                    // If the ray does not hit anything, set the cursor position and rotation to a default distance and orientation
                    cursor.transform.position = headGazeRay.origin + headGazeRay.direction * 3f;
                    cursor.transform.rotation = Quaternion.LookRotation(headGazeRay.direction);
                //}
            }
        }
        
    }
}
