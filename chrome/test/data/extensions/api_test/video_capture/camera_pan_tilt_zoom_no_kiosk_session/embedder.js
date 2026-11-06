// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Video capture PTZ access test outside kiosk mode
// summary: Browser test asserting that the videoCapture permission does not expose pan, tilt, and zoom track settings when the extension runs outside kiosk mode.
// ---

chrome.test.runTests([
  // Test that the videoCapture permission does not grant access to pan, tilt,
  // and zoom settings when extension is not running in kiosk mode.
  async function videoCapturePermissionDoesNotGrantAccessOutsideOfKiosk() {
    window.focus();
    const stream = await navigator.mediaDevices.getUserMedia({
      video: {pan: true, tilt: true, zoom: true},
    });
    chrome.test.assertTrue(!!stream);

    const [videoTrack] = stream.getVideoTracks();
    const settings = videoTrack.getSettings();
    chrome.test.assertFalse('pan' in settings);
    chrome.test.assertFalse('tilt' in settings);
    chrome.test.assertFalse('zoom' in settings);

    chrome.test.succeed();
  },
]);
