/*
* Copyright 2012 ZXing.Net authors
* Modified by Cedric
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

using System.Threading;

using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using ZXing;
using System;
using System.Collections;

public class BarcodeCam : MonoBehaviour
{
	private WebCamTexture camTexture;
	private Thread qrThread;

	private Color32[] c;
	private int W, H;

	private Rect screenRect;

	private bool isQuit;

	public string LastResult;

	public bool hasResult;

	void OnGUI ()
	{
		Vector2 pivot = new Vector2 (
			                screenRect.xMin + screenRect.width * 0.5f,
			                screenRect.yMin + screenRect.height * 0.5f
		                );
#if UNITY_IOS
		// Flip GUI layout about y-axis
		GUIUtility.ScaleAroundPivot (new Vector2 (1, -1), pivot);
#elif UNITY_STANDALONE
		// Flip GUI layout about x-axis
		GUIUtility.ScaleAroundPivot(new Vector2(-1, 1), pivot);
#endif
		GUI.DrawTexture (screenRect, camTexture, ScaleMode.ScaleAndCrop);
	}

	void OnEnable ()
	{
		if (camTexture != null) {
			camTexture.Play ();
			W = camTexture.width;
			H = camTexture.height;
		}
	}

	void OnDisable ()
	{
		if (camTexture != null) {
			camTexture.Pause ();
		}
	}

	void OnDestroy ()
	{
		isQuit = true;
		camTexture.Stop ();
	}

	void Start ()
	{
		LastResult = "";

		screenRect = new Rect (0, 0, Screen.width, Screen.height);
		camTexture = new WebCamTexture ();
		camTexture.requestedHeight = Screen.height;
		camTexture.requestedWidth = Screen.width;
		OnEnable ();

		qrThread = new Thread (DecodeQR);

		StartCoroutine (WaitUntilCamTextureReady ());
	}

	void Update ()
	{
		if (c == null) {
			c = camTexture.GetPixels32 ();
		}
	}

	IEnumerator WaitUntilCamTextureReady ()
	{
		// Wait till camTexture ready
		yield return new WaitUntil (() => 
			camTexture.width >= camTexture.requestedWidth &&
		camTexture.height >= camTexture.requestedHeight &&
		camTexture.GetPixels32 ().Length == camTexture.width * camTexture.height
		);
		// Clear old pixel32[]
		c = null;
		// Reset variable W H
		OnEnable ();
		qrThread.Start ();
	}

	void DecodeQR ()
	{
		// create a reader with a custom luminance source
		var barcodeReader = new BarcodeReader { AutoRotate = false, TryHarder = false };

		while (true) {
			if (isQuit)
				break;

			try {
				// decode the current frame
				var result = barcodeReader.Decode (c, W, H);
				if (result != null) {
					LastResult = result.Text;
					Debug.Log (LastResult);
				}
				hasResult = result != null;
				// Sleep a little bit and set the signal to get the next frame
				Thread.Sleep (200);
				c = null;
			} catch {
			}
		}
	}
}
