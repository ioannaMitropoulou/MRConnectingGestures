using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class GridCreator : MonoBehaviour
{
    public Vector3 size = new Vector3(1, 1, 1);
    private float dx;
    private float dy;
    private float dz;

    public Vector3 resolution = new Vector3(10, 10, 10);
    public Material outline_material = null;

    public GridPoint[,,] pts = null; // a 3-dimensional array of points
    
    public List<Vector3Int> redraw_points = new List<Vector3Int>(); // list of point indices that needs redraw

    private GameObject outline;

    public GameObject proceduralMesh;

    public Transform origin;
    private Transform startTransform;


    void Start()
    {
        Debug.Log("Creating Grid");

        // initialize empty list of grid pts
        pts = new GridPoint[(int)resolution.x, (int)resolution.y, (int)resolution.z];

        // get origin's transform
        origin = this.transform.Find("Origin");
        startTransform = origin;

        // get reference to ProceduralMesh component
        /*GameObject proceduralMesh = GameObject.Find("ProceduralMesh");*/

        // Create outline cube
        outline = GameObject.CreatePrimitive(PrimitiveType.Cube);
        outline.name = string.Format("Outline");
        outline.transform.parent = origin;
        outline.transform.localPosition = new Vector3(0.5f * size.x, 0.5f * size.y, 0.5f * size.z);
        outline.transform.localScale = new Vector3(size.x, size.y, size.z);
        outline.GetComponent<MeshRenderer>().material = outline_material;

        // fill in pts information in the grid
        dx = size.x / (resolution.x - 1);
        dy = size.y / (resolution.y - 1);
        dz = size.z / (resolution.z - 1);

        for (int z = 0; z < (int)resolution.z; z++)
        {
            for (int y = 0; y < (int)resolution.y; y++)
            {
                for (int x = 0; x < (int)resolution.x; x++)
                {
                    Vector3 pos = new Vector3(origin.transform.position.x + x * dx * origin.transform.localScale.x, 
                                              origin.transform.position.y + y * dy * origin.transform.localScale.y,
                                              origin.transform.position.z + z * dz * origin.transform.localScale.z);
                    pts[x, y, z] = new GridPoint(pos);

                    if (x == 0 || y == 0 || z == 0 || x == (int)resolution.x - 1 || y == (int)resolution.y - 1 || z == (int)resolution.z - 1)
                        pts[x, y, z].is_on_boundary = true;
                }
            }
        }
    }

    void Update()
    {
        if (origin.transform.hasChanged)
        {
            SetToTransform(origin.transform);
            Debug.Log("Grid and mesh transformation");
            origin.transform.hasChanged = false;
        }
    }

    void SetToTransform(Transform T)
    {
        // ATTENTION! THIS ONLY CONSIDERS POSITION ( NO SCALING OR ROTATION!)

        // transform origin
        origin = T;

        // transform grid pts to initial transform
        for (int z = 0; z < (int)resolution.z; z++)
            for (int y = 0; y < (int)resolution.y; y++)
                for (int x = 0; x < (int)resolution.x; x++)
                    pts[x, y, z].position = new Vector3(origin.transform.position.x + x * dx * origin.transform.localScale.x,
                                                        origin.transform.position.y + y * dy * origin.transform.localScale.y,
                                                        origin.transform.position.z + z * dz * origin.transform.localScale.z);
        
        // transform mesh to initial transform
        // proceduralMesh.GetComponent<ProceduralMesh>().TransformMesh(origin);
    }


    void ReturnToInitialTransform()
    {
        SetToTransform(startTransform);
    }



    void OnDrawGizmos()
    {
        // Draw a yellow cube at the transform position of the origin (only on the scene, not rendered in play time)
        Gizmos.color = Color.yellow;
        Transform origin = this.transform.Find("Origin");
        Gizmos.DrawWireCube(origin.position + new Vector3(0.5f * size.x, 0.5f * size.y, 0.5f * size.z), new Vector3(size.x, size.y, size.z));
    }


}
