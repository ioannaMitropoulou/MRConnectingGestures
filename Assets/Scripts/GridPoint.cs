using System.Xml.Schema;
using UnityEngine;
using System;

// NOTE: this script is used for MarchingCube
// PURPOSE: enables each point to be easily identified as on / off

public class GridPoint
{

    public Vector3 position;

    private bool state = false;

    public bool is_inside_collider = false;
    public bool needs_redraw = false;
    public bool is_on_boundary = false;

    public GridPoint(Vector3 pos)
    {
        position = pos;
    }

    public bool State
    {
        get
        {
            return state;
        }
        set
        {
            needs_redraw = false;

            if (value != state && !is_on_boundary) // if the value is changing
            {
                state = value;
                needs_redraw = true;
            }
        }
    }

    public void Update_State(bool sculptingToolType)
    {
        State = sculptingToolType;
    }

}
