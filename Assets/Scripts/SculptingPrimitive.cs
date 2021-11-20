using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Input;

public class SculptingPrimitive : MonoBehaviour
{
    public float dist_change_rate = 0.01f;

    public enum PrimitivesEnum
    {
        Sphere,
        Cube
    }

    public PrimitivesEnum primitive_type = PrimitivesEnum.Sphere;

    private GameObject shape;

    private DistanceFunction df;

    public GridCreator grid;



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

        // --- make the shape grabbable in AR 
        shape.AddComponent<ObjectManipulator>();
        shape.AddComponent<NearInteractionGrabbable>();

        // --- Set color
        if (dist_change_rate > 0) // if the primitive is an activator
            shape.GetComponent<MeshRenderer>().material.color = Color.green;
        else // if the primitive is a deactivator
            shape.GetComponent<MeshRenderer>().material.color = Color.red;


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

    void OnDrawGizmos()
    {
        // --- select color
        if (dist_change_rate > 0)
            Gizmos.color = Color.green;
        else
            Gizmos.color = Color.red;
        
        // --- select shape
        if (primitive_type == PrimitivesEnum.Sphere)
            Gizmos.DrawWireSphere(transform.position, 0.5f * transform.localScale.x);
        else if (primitive_type == PrimitivesEnum.Cube)
            Gizmos.DrawWireCube(transform.position, transform.localScale);
    }



    // Update is called once per frame
    void Update()
    {
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

            // --- go through all neigboring grid points, and check for collision
            // --- store all points in list which need redraw
            float dx = grid.size.x / (grid.resolution.x - 1);
            float dy = grid.size.y / (grid.resolution.y - 1);
            float dz = grid.size.z / (grid.resolution.z - 1);
            Vector3 dxyz_inv = new Vector3(1/dx, 1/dy, 1/dz);
            Vector3Int xyz_start, xyz_end;
            xyz_start = Vector3Int.Max(Vector3Int.FloorToInt(Vector3.Scale(transform.position - 0.5f * transform.localScale - grid.origin.transform.position, dxyz_inv)), Vector3Int.zero);
            xyz_end = Vector3Int.Min(Vector3Int.CeilToInt(Vector3.Scale(transform.position + 0.5f * transform.localScale - grid.origin.transform.position, dxyz_inv)), Vector3Int.FloorToInt(grid.resolution)-Vector3Int.one);
            for (int z = xyz_start.z; z <= xyz_end.z; z++)
            {
                for (int y = xyz_start.y; y <= xyz_end.y; y++)
                {
                    for (int x = xyz_start.x; x <= xyz_end.x; x++)
                    {
                        GridPoint pt = grid.pts[x, y, z];
                        float d = df.GetDistance(pt.position);
                        
                        if (d < 0) // if there is a collision, activate collision mode
                        {
                            if (!pt.is_inside_collider)
                            {
                                pt.is_inside_collider = true;
                                pt.Update_Distance(dist_change_rate);
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
}
