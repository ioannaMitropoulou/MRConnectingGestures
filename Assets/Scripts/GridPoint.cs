using System.Xml.Schema;
using UnityEngine;

// NOTE: this script is used for MarchingCube
// PURPOSE: enables each point to be easily identified as on / off

public class GridPoint : MonoBehaviour
{
    #region --- events ---
    public delegate void GridPointChange(bool on, Vector3 position);    //event handler signature
    public static event GridPointChange OnGridPointChange;              //event name
    #endregion

    private Color onColor = Color.red;
    private Color offColor = Color.grey;

    private float onSize = 0.03f;
    private float offSize = 0.02f;
    private MeshRenderer mr = null;
    private float _dist_value = 1.0f;

    private bool is_inside_activator_collider = false;
    private bool is_inside_deactivator_collider = false;

    private Collider other_collider = null;

    private float dist_change_rate = 0.5f;

    public float dist_value
    {
        get
        {
            return _dist_value;
        }
        set
        {
            _dist_value = value;

            // update visualization color
            bool inside = _dist_value < 0;
            GetRenderer().material.color = inside ? onColor : offColor;

            this.transform.localScale = inside ? new Vector3(onSize, onSize, onSize) : new Vector3(offSize, offSize, offSize);
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
        dist_value = 1.0f;
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Trigger entry");
        if (other.name == "Activator")
        {
            // dist_value = -1.0f;
            is_inside_activator_collider = true;
        }
        else if (other.name == "Deactivator")
        {
            // dist_value = 1.0f;
            is_inside_deactivator_collider = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Trigger exit");
        if (other.name == "Activator")
        {
            is_inside_activator_collider = false;
        }
        else if (other.name == "Deactivator")
        {
            is_inside_deactivator_collider = false;
        }
    }


    void Update()
    {
        if (is_inside_activator_collider && is_inside_deactivator_collider)
        {
            // do nothing
        }
        else if (is_inside_activator_collider)
        {
            Debug.Log("Inside activator");
            dist_value = dist_value - dist_change_rate * Time.deltaTime;
        }

        else if (is_inside_deactivator_collider)
        {
            dist_value = dist_value + dist_change_rate * Time.deltaTime;
            Debug.Log("Inside deactivator");
        }

        if (OnGridPointChange != null)
        {
            OnGridPointChange(dist_value < 0, Position); //fire off event (for any code listening)
        }
    }



    private MeshRenderer GetRenderer()
    {
        if (mr == null)
            mr = this.GetComponent<MeshRenderer>();
        return mr;
    }
}
