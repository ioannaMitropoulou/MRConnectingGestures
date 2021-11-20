using System.Xml.Schema;
using UnityEngine;
using System;

// NOTE: this script is used for MarchingCube
// PURPOSE: enables each point to be easily identified as on / off

public class GridPoint
{

    public Vector3 position;

    private float dist_value = 0.0f;

    public bool is_inside_collider = false;
    public bool needs_redraw = false;

    private float max_allowed_abs_value = 1.0f;

    public GridPoint(Vector3 pos)
    {
        position = pos;
    }

    public float Dist_value
    {
        get
        {
            return dist_value;
        }
        set
        { 
            if (Math.Abs(value - dist_value) > 0.0000001) // if the value is changing
            {
                if (value < -max_allowed_abs_value)
                {
                    needs_redraw = dist_value != -max_allowed_abs_value;
                    dist_value = -max_allowed_abs_value;
                }
                else if (value > max_allowed_abs_value)
                {
                    needs_redraw = dist_value != max_allowed_abs_value;
                    dist_value = max_allowed_abs_value;
                }
                else
                {
                    dist_value = value;
                    needs_redraw = true;
                    
                }
            }
        }
    }

    public void Update_Distance(float distance_change_rate)
    {
        Dist_value = Dist_value + distance_change_rate * Time.deltaTime;
    }

    private void Start()
    {
        Dist_value = 0.1f;
    }


}
