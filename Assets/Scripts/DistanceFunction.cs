using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class DistanceFunction
{
    public Vector3 cen;
    public abstract float GetDistance(Vector3 p);
}


public class DFSphere : DistanceFunction
{
    private float r = 1.0f;

    public DFSphere(float r_, Vector3 cen_)
    {
        r = r_;
        cen = cen_;
    }
    public override float GetDistance(Vector3 p)
    {
        return Vector3.Magnitude(p - cen) - r;
    }
}


public class DFBox : DistanceFunction
{
    private Vector3 dimensions;

    public DFBox(Vector3 cen_, Vector3 dimensions_)
    {
        cen = cen_;
        dimensions = dimensions_;
    }
    public override float GetDistance(Vector3 p)
    {
        return 1.0f; // TODO!
    }
}
