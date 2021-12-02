using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;

[RequireComponent(typeof(Interactable))]
public class Interaction_Responder : MonoBehaviour, IMixedRealityTouchHandler
{
    // to detect which hand was used for the last touch. 
    public Handedness lastTouch;
    public InputEventData inputPrimitive;
    public UnityEvent<Handedness> OnClick = new UnityEvent<Handedness>();

    private MeshRenderer render;

    private void Start()
    {
        GetComponent<Interactable>().OnClick.AddListener(HandleClick);
        render = GetComponent<MeshRenderer>();
    }

    // Start is called before the first frame update
    public void OnTouchStarted(HandTrackingInputEventData eventData)
    {
        lastTouch = eventData.Handedness;
        render.material.color = Color.red;
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
        render.material.color = Color.white;
    }

    public void OnTouchUpdated(HandTrackingInputEventData eventData)
    {
    }

    private void HandleClick()
    {
        OnClick.Invoke(lastTouch);
    }
}
