// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebView pointer lock permission request test logic
// summary: Creates a webview and removes it from the DOM when a pointerLock permission request arrives, signaling test status via chrome.test messages.
// ---

onload = function() {
  var webview = document.createElement('webview');

  webview.addEventListener('permissionrequest', (e) => {
    if (e.permission != 'pointerLock') {
      console.log('Received unexpected permission request: ' + e.permission);
      e.chrome.test.sendMessage('WebViewTest.FAILURE');
    }
    webview.parentNode.removeChild(webview);
  });

  webview.addEventListener('loadstop', (e) => {
    chrome.test.sendMessage('WebViewTest.LAUNCHED');
  });

  webview.src = 'data:text/html,<html><body><div></div></body></html>';
  document.body.appendChild(webview);
};
