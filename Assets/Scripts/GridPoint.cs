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
    private Vector3 scale = new Vector3(1.0f, 1.0f, 1.0f);

    private Color onColor = Color.red;
    private Color offColor = Color.grey;

    private float onSize = 0.03f;
    private float offSize = 0.02f;
    private float dist_value = 0.0f;

    public bool is_inside_collider = false;
    public float collider_change_rate = 2.5f;

    private float max_allowed_abs_value = 4.0f;

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

                    scale = inside ? new Vector3(onSize, onSize, onSize) : new Vector3(offSize, offSize, offSize);

                    if (GridPointChanged != null)
                    {
                        Debug.Log("Grid point changed!");
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


/*    private void OnTriggerEnter(Collider other)
    {
        if (other.name == "Activator")
            is_inside_activator_collider = true;
        else if (other.name == "Deactivator")
            is_inside_deactivator_collider = true;
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.name == "Activator")
            is_inside_activator_collider = false;
        else if (other.name == "Deactivator")
            is_inside_deactivator_collider = false;
    }*/


    public void Update()
    {
        if (is_inside_collider)
        {
            Dist_value = Dist_value + collider_change_rate * Time.deltaTime;
        }
    }



/*    private MeshRenderer GetRenderer()
    {
        if (mr == null)
            mr = this.GetComponent<MeshRenderer>();
        return mr;
    }*/
}
