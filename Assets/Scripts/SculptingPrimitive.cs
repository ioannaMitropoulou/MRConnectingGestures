using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;


[RequireComponent(typeof(Interactable))]
public class SculptingPrimitive : MonoBehaviour, IMixedRealityTouchHandler
{
    public enum ToolType
    {
        Activator, // Updated with right hand
        Deactivator // Updated with left hand
    }
    public ToolType tool_type = ToolType.Activator;

    public enum PrimitivesEnum
    {
        Sphere,
        Cube
    }

    public PrimitivesEnum primitive_type = PrimitivesEnum.Sphere;

    private GameObject shape;

    private DistanceFunction df;

    public GridCreator grid;

    private MeshRenderer renderer;

    // --- interaction responder params
    public Handedness lastTouch;
    public InputEventData inputPrimitive;
    public UnityEvent<Handedness> OnClick = new UnityEvent<Handedness>();
    MixedRealityPose pose; // parameter where hand pose is stored


    void Start()
    {
        // --- Set shape
        if (primitive_type == PrimitivesEnum.Sphere)
        {
            shape = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        }
        else if (primitive_type == PrimitivesEnum.Cube)
        {
            shape = GameObject.CreatePrimitive(PrimitiveType.Cube);
        }
        else
        {
            return;
        }
        shape.transform.position = transform.position;
        shape.transform.rotation = transform.rotation;
        shape.transform.localScale = transform.localScale;

        // --- interaction responder
        GetComponent<Interactable>().OnClick.AddListener(HandleClick);

        // --- make the shape grabbable in AR 
        shape.AddComponent<ObjectManipulator>();
        shape.AddComponent<NearInteractionGrabbable>();

        // --- Set color
        renderer = shape.GetComponent<MeshRenderer>();
        if (tool_type == ToolType.Activator) // if the primitive is an activator
            renderer.material.color = Color.green;
        else // if the primitive is a deactivator
            renderer.material.color = Color.red;


        // --- Create distance function
        if (primitive_type == PrimitivesEnum.Sphere)
        {
            df = new DFSphere(shape.transform.localScale.x * 0.5f, shape.transform); // use the localScale.x as the circle radius
        }
        else if (primitive_type == PrimitivesEnum.Cube)
        {
            df = new DFBox(shape.transform.localScale, shape.transform); // use the localScale as box dimensions
        }
    }


    // --- Interaction responder functions
    public void OnTouchStarted(HandTrackingInputEventData eventData)
    {
        lastTouch = eventData.Handedness;
        renderer.material.color = Color.blue ;
        Debug.Log("last touch use hand" + lastTouch);  // console write
        // change the primitive in the corresponding hand to the current primitive
        // ===============================================================================
        //if (primitive_type == PrimitivesEnum.Sphere)
        //{

        //    shape = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //}
        //else if (primitive_type == PrimitivesEnum.Cube)
        //{
        //    shape = GameObject.CreatePrimitive(PrimitiveType.Cube);
        //}
        //else
        //{
        //    return;
        //}
        // ===============================================================================
    }

    public void OnTouchCompleted(HandTrackingInputEventData eventData)
    {
        renderer.material.color = Color.white;
    }

    public void OnTouchUpdated(HandTrackingInputEventData eventData)
    {
    }

    private void HandleClick()
    {
        OnClick.Invoke(lastTouch);
    }

    void OnDrawGizmos()
    {
        // --- select color
        if (tool_type == ToolType.Activator)
            Gizmos.color = Color.green;
        else
            Gizmos.color = Color.red;
        
        // --- select shape
        if (primitive_type == PrimitivesEnum.Sphere)
            Gizmos.DrawWireSphere(transform.position, 0.5f * transform.localScale.x);
        else if (primitive_type == PrimitivesEnum.Cube)
            Gizmos.DrawWireCube(transform.position, transform.localScale);
    }

    void PrimitiveUpdate()
    {
        // --- go through all neigboring grid points, and check for collision
        // --- store all points in list which need redraw
        float dx = grid.size.x / (grid.resolution.x - 1);
        float dy = grid.size.y / (grid.resolution.y - 1);
        float dz = grid.size.z / (grid.resolution.z - 1);
        Vector3 dxyz_inv = new Vector3(1 / dx, 1 / dy, 1 / dz);
        Vector3Int xyz_start, xyz_end;

        float s = 0.55f; // use a slightly bigger scale to be sure all relevant pts are in
        xyz_start = Vector3Int.Max(Vector3Int.FloorToInt(Vector3.Scale(transform.position - s * transform.localScale - grid.origin.transform.position, dxyz_inv)), Vector3Int.zero);
        xyz_end = Vector3Int.Min(Vector3Int.CeilToInt(Vector3.Scale(transform.position + s * transform.localScale - grid.origin.transform.position, dxyz_inv)), Vector3Int.FloorToInt(grid.resolution) - Vector3Int.one);
        for (int z = xyz_start.z; z <= xyz_end.z; z++)
        {
            for (int y = xyz_start.y; y <= xyz_end.y; y++)
            {
                for (int x = xyz_start.x; x <= xyz_end.x; x++)
                {
                    GridPoint pt = grid.pts[x, y, z];

                    bool check_pt = false; // only check points if they are likely to change in the event of collision
                    if (tool_type == ToolType.Activator && pt.State == false)
                        check_pt = true;
                    else if (tool_type == ToolType.Deactivator && pt.State == true)
                        check_pt = true;

                    if (check_pt)
                    {
                        float d = df.GetDistance(pt.position);

                        if (d < 0) // if there is a collision, activate collision mode
                        {
                            if (!pt.is_inside_collider)
                            {
                                pt.is_inside_collider = true;
                                pt.Update_State(tool_type == ToolType.Activator);
                                if (pt.needs_redraw)
                                {
                                    grid.redraw_points.Add(new Vector3Int(x, y, z));
                                    pt.needs_redraw = false;
                                }
                            }
                        }
                        else // otherwise deactivate collision mode
                        {
                            pt.is_inside_collider = false;
                        }
                    }
                }
            }
        }
    }


    // Update is called once per frame
    void Update()
    {

        // --- Change primitive according to hand position
        if (tool_type == ToolType.Activator)
        {
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
            {
                shape.transform.position = pose.Position;
            }
        }

        else if (tool_type == ToolType.Deactivator)
        {
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out pose))
            {
                shape.transform.position = pose.Position;
            }
        }


        // --- Update primitive
        if (shape.transform.hasChanged) // only check if the transform of the shape has been changed
        {
            shape.transform.hasChanged = false;

            // --- update DistanceFunction transform and dimensions
            df.transform = shape.transform;
            df.UpdateDimensions(shape.transform.localScale);

            // --- update Gizmo transform
            transform.position = shape.transform.position;
            transform.rotation = shape.transform.rotation;
            transform.localScale = shape.transform.localScale;

            PrimitiveUpdate();
        }
    }
}
