using System.Xml.Schema;
using UnityEngine;
using System;

// NOTE: this script is used for MarchingCube
// PURPOSE: enables each point to be easily identified as on / off

public class GridPoint : MonoBehaviour
{
    #region --- events ---
    public static event Action GridPointChanged;  //event name
    #endregion


    private Color onColor = Color.red;
    private Color offColor = Color.grey;

    private float onSize = 0.03f;
    private float offSize = 0.02f;
    private MeshRenderer mr = null;
    private float dist_value = 0.0f;

    private bool is_inside_activator_collider = false;
    private bool is_inside_deactivator_collider = false;

    private float dist_change_rate = 2.5f;

    private float max_allowed_abs_value = 4.0f;

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
                    GetRenderer().material.color = inside ? onColor : offColor;

                    transform.localScale = inside ? new Vector3(onSize, onSize, onSize) : new Vector3(offSize, offSize, offSize);

                    if (GridPointChanged != null)
                    {
                        GridPointChanged(); //fire off event (for any code listening)
                    }
                }
            }
        }
    }

    public bool Visible
    {
        get
        {
            return GetRenderer().enabled;
        }
        set
        {
            GetRenderer().enabled = value;
        }
    }

    public Vector3 Position
    {
        get
        {
            return this.transform.localPosition;
        }
        set
        {
            this.transform.localPosition = new Vector3(value.x, value.y, value.z);
        }
    }

    private void Start()
    {
        Dist_value = 0.1f;
    }

    private void OnTriggerEnter(Collider other)
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
    }

    void Update()
    {
        if (is_inside_activator_collider && is_inside_deactivator_collider)
        {
            // do nothing
        }
        else if (is_inside_activator_collider)
        {
            Dist_value = Dist_value - dist_change_rate * Time.deltaTime;
        }

        else if (is_inside_deactivator_collider)
        {
            Dist_value = Dist_value + dist_change_rate * Time.deltaTime;
        }
    }



    private MeshRenderer GetRenderer()
    {
        if (mr == null)
            mr = this.GetComponent<MeshRenderer>();
        return mr;
    }
}
