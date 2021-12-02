using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class DistanceFunction
{
    public Transform transform;
    public abstract float GetDistance(Vector3 p);

    public abstract void UpdateDimensions(Vector3 s);
}


public class DFSphere : DistanceFunction
{
    private float r;

    public DFSphere(float r_, Transform transform_)
    {
        transform = transform_;
        r = r_;
    }
    public override float GetDistance(Vector3 p)
    {
        return Vector3.Magnitude(p - transform.position) - r;
    }

    public override void UpdateDimensions(Vector3 s)
    {
        r = s.x * 0.5f;
    }
}


public class DFBox : DistanceFunction
{
    private float dimX;
    private float dimY;
    private float dimZ;
    private float r; // radius for smoothening edges of the box

    public DFBox(Vector3 dimensions, Transform transform_)
    {
        transform = transform_;
        dimX = dimensions.x;
        dimY = dimensions.y;
        dimZ = dimensions.z;
        r = dimX * 0.02f;
    }
    public override float GetDistance(Vector3 point)
    {
        Vector3 p = new Vector3(point.x, point.y, point.z); // create copy of the point

        // translate so that the box lies in the origin
        p.x = p.x - transform.position.x;
        p.y = p.y - transform.position.y;
        p.z = p.z - transform.position.z;

        // apply rotation of transform
        Vector3 a = transform.rotation.eulerAngles;
        p = Quaternion.Euler(a.x, a.y, a.z) * p;

        // calculate distance
        float dx = Mathf.Abs(p.x) - (dimX / 2.0f - r);
        float dy = Mathf.Abs(p.y) - (dimY / 2.0f - r);
        float dz = Mathf.Abs(p.z) - (dimZ / 2.0f - r);

        float inside = Mathf.Max(dx, Mathf.Max(dy, dz)) - r;
        dx = Mathf.Max(dx, 0);
        dy = Mathf.Max(dy, 0);
        dz = Mathf.Max(dz, 0);
        if (inside + r > 0)
        {
            return (Mathf.Sqrt(dx * dx + dy * dy + dz * dz) - r);
        }
        else
        {
            return inside;
        }
    }

    public override void UpdateDimensions(Vector3 s)
    {
        dimX = s.x ;
        dimY = s.y;
        dimZ = s.z;
        r = dimX * 0.02f;
    }
}
