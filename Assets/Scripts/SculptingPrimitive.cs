using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SculptingPrimitive : MonoBehaviour
{
    public float dist_change_rate = 0.1f;

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


        // --- Set color
        if (dist_change_rate > 0) // if the primitive is an activator
            shape.GetComponent<MeshRenderer>().material.color = Color.green;
        else // if the primitive is a deactivator
            shape.GetComponent<MeshRenderer>().material.color = Color.red;


        // --- Create distance function
        if (primitive_type == PrimitivesEnum.Sphere)
        {
            df = new DFSphere(shape.transform.localScale.x * 0.5f, shape.transform.position);
        }
        else if (primitive_type == PrimitivesEnum.Cube)
        {
            df = new DFBox(shape.transform.position, shape.transform.localScale * 0.5f); // TODO
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

            // --- update DistanceFunction
            df.cen = shape.transform.position;
            transform.position = shape.transform.position;


            // --- go through all grid points, and check for collision
            for (int z = 0; z < (int)grid.resolution.z; z++)
            {
                for (int y = 0; y < (int)grid.resolution.y; y++)
                {
                    for (int x = 0; x < (int)grid.resolution.x; x++)
                    {
                        GridPoint pt = grid.pts[x, y, z];
                        float d = df.GetDistance(pt.position);
                        
                        if (d < 0) // if there is a collision, activate collision mode
                        {
                            pt.is_inside_collider = true;
                            pt.collider_change_rate = dist_change_rate;
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
