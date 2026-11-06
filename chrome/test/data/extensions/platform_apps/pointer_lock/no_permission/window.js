// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Pointer lock denial test script
// summary: Runs a Chrome test that requests pointer lock and expects the pointer lock error callback to signal success, proving access is denied.
// ---

window.onload = function () {
  chrome.test.sendMessage('Launched', function() {
    chrome.test.runTests([
      function requestPointerLock() {
        document.onpointerlockchange = chrome.test.fale;
        document.onpointerlockerror = chrome.test.succeed;
        document.body.requestPointerLock();
      },
    ]);
  });
}
