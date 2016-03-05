using UnityEngine;
using System.Collections;

public class DelayedStartup : MonoBehaviour
{
	// Use this for initialization
	void Start ()
	{
		StartCoroutine (Delay ());
	}

	IEnumerator Delay ()
	{
		yield return new WaitForSeconds (1);
		GameObject.Find ("QR").GetComponent<BarcodeCam> ().enabled = true;
	}

	// Update is called once per frame
	void Update ()
	{
	
	}
}
