using System.Xml.Schema;
using UnityEngine;
using System;

// NOTE: this script is used for MarchingCube
// PURPOSE: enables each point to be easily identified as on / off

public class GridPoint
{
    #region --- events ---
    public static event Action GridPointChanged;  //event name
    #endregion

    public Vector3 position;

    private Color onColor = Color.red;
    private Color offColor = Color.grey;

    private float onSize = 0.03f;
    private float offSize = 0.02f;
    private float dist_value = 0.0f;

    public bool is_inside_collider = false;
    public float collider_change_rate = 0.0f;

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
                if (Math.Abs(value) < max_allowed_abs_value) // if we do not exceed max allowed value
                {
                    dist_value = value;
                    // update visualization color
                    bool inside = dist_value < 0;
                    //GetRenderer().material.color = inside ? onColor : offColor;

                    if (GridPointChanged != null)
                    {
                        GridPointChanged(); //fire off event (for any code listening)
                    }
                }
            }
        }
    }


    private void Start()
    {
        Dist_value = 0.1f;
    }


    public void Update()
    {
        if (is_inside_collider)
        {
            Dist_value = Dist_value + collider_change_rate * Time.deltaTime;
        }
    }

}
