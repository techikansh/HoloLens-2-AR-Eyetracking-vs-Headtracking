using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdCalculator : MonoBehaviour
{

    public GameObject panel_1_button_1, panel_1_button_2;
    public static double panel_1_id;

    public GameObject panel_2_button_1, panel_2_button_2;
    public static double panel_2_id;

    public GameObject panel_3_button_1, panel_3_button_2;
    public static double panel_3_id;

    public GameObject panel_4_button_1, panel_4_button_2;
    public static double panel_4_id;

    public GameObject panel_5_button_1, panel_5_button_2;
    public static double panel_5_id;

    public GameObject panel_6_button_1, panel_6_button_2;
    public static double panel_6_id;

    public GameObject panel_7_button_1, panel_7_button_2;
    public static double panel_7_id;

    public GameObject panel_8_button_1, panel_8_button_2;
    public static double panel_8_id;

    public GameObject panel_9_button_1, panel_9_button_2;
    public static double panel_9_id;



    // Start is called before the first frame update
    void Start()
    {
        panel_1_id = calculate_fitts_id(panel_1_button_1, panel_1_button_2, panel_1_button_1.transform.position, panel_1_button_2.transform.position);
        Debug.Log("panel 1 id: " + panel_1_id);
        
        panel_2_id = calculate_fitts_id(panel_2_button_1, panel_2_button_2, panel_2_button_1.transform.position, panel_2_button_2.transform.position);
        Debug.Log("panel 2 id: " + panel_2_id);

        panel_3_id = calculate_fitts_id(panel_3_button_1, panel_3_button_2, panel_3_button_1.transform.position, panel_3_button_2.transform.position);
        Debug.Log("panel 3 id: " + panel_3_id);

        panel_4_id = calculate_fitts_id(panel_4_button_1, panel_4_button_2, panel_4_button_1.transform.position, panel_4_button_2.transform.position);
        Debug.Log("panel 4 id: " + panel_4_id);

        panel_5_id = calculate_fitts_id(panel_5_button_1, panel_5_button_2, panel_5_button_1.transform.position, panel_5_button_2.transform.position);
        Debug.Log("panel 5 id: " + panel_5_id);

        panel_6_id = calculate_fitts_id(panel_6_button_1, panel_6_button_2, panel_6_button_1.transform.position, panel_6_button_2.transform.position);
        Debug.Log("panel 6 id: " + panel_6_id);

        panel_7_id = calculate_fitts_id(panel_7_button_1, panel_7_button_2, panel_7_button_1.transform.position, panel_7_button_2.transform.position);
        Debug.Log("panel 7 id: " + panel_7_id);

        panel_8_id = calculate_fitts_id(panel_8_button_1, panel_8_button_2, panel_8_button_1.transform.position, panel_8_button_2.transform.position);
        Debug.Log("panel 8 id: " + panel_8_id);

        panel_9_id = calculate_fitts_id(panel_9_button_1, panel_9_button_2, panel_9_button_1.transform.position, panel_9_button_2.transform.position);
        Debug.Log("panel 9 id: " + panel_9_id);

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public double calculate_fitts_id(GameObject panel_1_button_1, GameObject panel_1_button_2, Vector3 button_1_position, Vector3 button_2_position) {

        double distance = Vector3.Distance(button_1_position, button_2_position);
        //Debug.Log("Disatance: " + distance);

        double width = calculate_width(panel_1_button_1, Vector3.right);
        //Debug.Log("Width: " + width);

        double id = Math.Log(distance / width + 1, 2);
        //Debug.Log("Id: " + id);

        return id;
    }

    public float calculate_width(GameObject cubeObject, Vector3 axis)
    {
        // Get the Renderer component of the cube
        Renderer cubeRenderer = cubeObject.GetComponent<Renderer>();

        if (cubeRenderer != null)
        {
            // Calculate the size along the specified axis
            float sizeAlongAxis = Vector3.Dot(cubeRenderer.bounds.size, axis.normalized);

            return sizeAlongAxis;
        }
        else
        {
            Debug.LogError("Cube GameObject is missing a Renderer component.");
            return 0f;
        }
    }


}
