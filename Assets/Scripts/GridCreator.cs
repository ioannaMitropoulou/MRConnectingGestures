using UnityEngine;
using UnityEngine.UI;


public class GridCreator : MonoBehaviour
{
    #region --- event ---
    public delegate void GridCreated(Vector3 gridsize);
    public static event GridCreated OnGridCreated;
    #endregion

    public Vector3 size = new Vector3(1, 1, 1);
    public Vector3 resolution = new Vector3(10, 10, 10);
    public Material outline_material = null;

    public Text txt = null;

    public static GridPoint[,,] pts = null; // a 3-dimensional array of points

    private GameObject outline;

    void Start()
    {
        Debug.Log("Creating Grid");

        // initialize empty list of grid pts
        pts = new GridPoint[(int)resolution.x, (int)resolution.y, (int)resolution.z];


        // get origin's transform
        Transform origin = this.transform.Find("Origin");

        // Create outline cube
        outline = GameObject.CreatePrimitive(PrimitiveType.Cube);
        outline.name = string.Format("Outline");
        outline.transform.parent = origin;
        outline.transform.localPosition = new Vector3(0.5f * size.x, 0.5f * size.y, 0.5f * size.z);
        outline.transform.localScale = new Vector3(size.x, size.y, size.z);
        outline.GetComponent<MeshRenderer>().material = outline_material;

        // fill in pts information in the grid
        float dx = size.x / (resolution.x - 1);
        float dy = size.y / (resolution.y - 1);
        float dz = size.z / (resolution.z - 1);

        for (int z = 0; z < (int)resolution.z; z++)
        {
            for (int y = 0; y < (int)resolution.y; y++)
            {
                for (int x = 0; x < (int)resolution.x; x++)
                {
                    // create GameObject on which the GridPoint class will be attached
                    GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
                    go.name = string.Format("P{0}.{1}.{2}", x, y, z);
                    go.transform.parent = origin;
                    go.transform.localPosition = new Vector3(x*dx, y*dy, z*dz);
                    go.GetComponent<Collider>().isTrigger = true;
                    Rigidbody rb = go.AddComponent<Rigidbody>();
                    rb.useGravity = false;

                    // attach GridPoint, and assign to the pts[x,y,z] array
                    pts[x, y, z] = go.AddComponent<GridPoint>();
                }
            }
        }
    }


    void Update()
    {
    }



    void OnDrawGizmos()
    {
        // Draw a yellow cube at the transform position of the origin (only on the scene, not rendered in play time)
        Gizmos.color = Color.yellow;
        Transform origin = this.transform.Find("Origin");
        Gizmos.DrawWireCube(origin.position + new Vector3(0.5f * size.x, 0.5f * size.y, 0.5f * size.z), new Vector3(size.x, size.y, size.z));
    }


}
