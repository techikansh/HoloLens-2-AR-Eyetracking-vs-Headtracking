/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

public class PanelManager : MonoBehaviour
{
    public GameObject[] panels; // Array to hold all the panels
    public GameObject endPanel; // Reference to the End-Panel

    private List<int> usedPanels = new List<int>(); // List to track used panels
    private System.Random rnd = new System.Random();
    private int previousPanel = 0;  

    void Start()
    {
        usedPanels.Add(0);
    }

    public void ShowNextPanel()
    {
        if (usedPanels.Count >= panels.Length)
        {
            // If all panels are shown, display the end panel and return
            endPanel.SetActive(true);
            return;
        }

        int panelToShow = GetUnusedPanelIndex();

        panels[previousPanel].SetActive(false);

        Debug.Log("Panel to show: " + panelToShow);
        PrintList(usedPanels);

        ShowPanel(panelToShow);
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
*/