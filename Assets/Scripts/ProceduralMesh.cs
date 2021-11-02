using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ProceduralMesh : MonoBehaviour
{
    public Material material = null;

    private Mesh mesh = null;

    private List<Vector3> vertices = new List<Vector3>();
    private List<int> triangles = new List<int>();
    private List<Vector2> uv = new List<Vector2>();

    private bool recompute_flag = false;

    private GridCreator grid = null;

    private void Generate()
    {
        GameObject go = this.gameObject;

        // --- get empty mesh
        mesh = GetMesh(go, material);
        mesh.Clear();
        vertices.Clear();
        triangles.Clear();
        uv.Clear();

        // --- run marching cubes
        float iso = 0.0f;
        MarchingCubes.Run(grid, iso, vertices, triangles, uv);

        // --- set mesh
        mesh.vertices = vertices.ToArray();
        mesh.triangles = triangles.ToArray();
        mesh.uv = uv.ToArray();

        mesh.RecalculateBounds();
        mesh.RecalculateNormals();

        // --- set mesh transform
        transform.parent = grid.origin;

    }


    public Mesh GetMesh(GameObject go, Material material)
    {
        MeshFilter mf = go.GetComponent<MeshFilter>(); //add meshfilter component
        if (mf == null)
            mf = go.AddComponent<MeshFilter>();

        MeshRenderer mr = go.GetComponent<MeshRenderer>(); //add meshrenderer component
        if (mr == null)
            mr = go.AddComponent<MeshRenderer>();

        mr.material = material;

        //allocate mesh 
        if (Application.isEditor == true)
        {
            mesh = mf.sharedMesh;
            if (mesh == null)
            {
                mf.sharedMesh = new Mesh();
                mesh = mf.sharedMesh;
            }
        }
        else
        {
            mesh = mf.mesh;
            if (mesh == null)
            {
                mf.mesh = new Mesh();
                mesh = mf.mesh;
            }
        }
        mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; //increase max vertices per mesh
        mesh.name = "ProceduralMesh";

        return mesh;
    }


    void Start()
    {
        grid = GetComponentInParent<GridCreator>();

        // subscribe to GridPoint Changing event
        GridPoint.GridPointChanged += GridPointChanged;

    }

    private void OnDisable()
    {
        // make sure to unsubscribe from event when disabled
        GridPoint.GridPointChanged -= GridPointChanged;
    }

    private void GridPointChanged()
    {
        recompute_flag = true;
    }

    void Update()
    {
        if (recompute_flag && grid != null)
        {
            Generate();
            recompute_flag = false;
            Debug.Log("Generating marching cubes mesh!");
        }
    }
}
