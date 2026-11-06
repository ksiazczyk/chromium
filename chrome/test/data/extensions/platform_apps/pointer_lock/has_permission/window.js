// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Pointer lock request test script
// summary: Runs the Chrome test that requests pointer lock on the document body and reports success or failure via chrome.test.
// ---

window.onload = function () {
  chrome.test.sendMessage('Launched', function() {
    chrome.test.runTests([
      function requestPointerLock() {
        document.onpointerlockchange = chrome.test.succeed;
        document.onpointerlockerror = chrome.test.fail;
        document.body.requestPointerLock();
      },
    ]);
  });
}
