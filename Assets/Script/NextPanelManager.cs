using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class NextPanelManager : MonoBehaviour
{

    //public GameObject next_button_panel; 
    //public GameObject current_panel;

    //Code form PanelManager.cs
    public GameObject[] panels; // Array to hold all the panels
    public GameObject endPanel; // Reference to the End-Panel

    private List<int> usedPanels = new List<int>(); // List to track used panels
    private System.Random rnd = new System.Random();
    private int previousPanel = 0;



    private int cube_1_hovered_count = 0;
    void Start()
    {
        usedPanels.Add(0);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void onHover() { 

        //cube_1_hovered_count = Logger.firstButtonClickedCount;
        //Debug.Log("cube_1_hovered_count: " + cube_1_hovered_count);
        Debug.Log("firstButtonClickedCount: " + Logger.firstButtonClickedCount);

        if (Logger.firstButtonClickedCount % 2 == 0 && Logger.firstButtonClickedCount != 0)
        {
            Logger.firstButtonClickedCount = 0;
            ShowNextPanel();
        }
    }

    public void ShowNextPanel()
    {
       /* Debug.Log("called ShowNextPanel()");
        Debug.Log(usedPanels.Count);
        Debug.Log(panels.Length);*/
        if (usedPanels.Count >= panels.Length)
        {
            // If all panels are shown, display the end panel and return
            endPanel.SetActive(true);
            return;
        }

        int panelToShow = GetUnusedPanelIndex();

        StartCoroutine(DeactivatePanelsNextFrame(usedPanels, panels, panelToShow));

        Debug.Log("Panel to show: " + panelToShow+1);
        //PrintList(usedPanels);

        ShowPanel(panelToShow);
    }

    // Coroutine to deactivate panels at the end of the frame
    IEnumerator DeactivatePanelsNextFrame(List<int> usedPanels, GameObject[] panels, int currentPanelIndex)
    {
        yield return new WaitForEndOfFrame();

        foreach (int i in usedPanels)
        {
            // Check if the panel is not the current one and is active before deactivating
            if (i != currentPanelIndex && panels[i] != null && panels[i].activeInHierarchy)
            {
                panels[i].SetActive(false);
            }
        }
    }



    private int GetUnusedPanelIndex()
    {
        List<int> unusedPanels = new List<int>();

        for (int i = 0; i < panels.Length; i++)
        {
            if (!usedPanels.Contains(i))
            {
                unusedPanels.Add(i);
            }
        }

        if (unusedPanels.Count > 0)
        {
            int randomIndex = rnd.Next(0, unusedPanels.Count);
            return unusedPanels[randomIndex];
        }

        return -1; // Return -1 if all panels are shown
    }

    private void ShowPanel(int index)
    {
        /*try{
             panels[previousPanel].SetActive(false);
         }
         catch (Exception e){
             Debug.Log("Exception: " + e);
         }*/
        //Debug.Log("Called ShowPanel Function :)");
        //Debug.Log("index: " + index);
        panels[index].SetActive(true);

        usedPanels.Add(index);
        
        previousPanel = index;
    }

    private void PrintList(List<int> list)
    {
        foreach (int number in list)
        {
            Debug.Log("Used Panels: " + number);
        }
    }
}
