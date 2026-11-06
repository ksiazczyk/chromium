// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Webview creation script inside the sandboxed iframe
// summary: Creates a webview element pointing at a data URL guest and posts LAUNCHED or FAILURE messages to the parent window based on loadstop or loadabort.
// ---

var webview = document.createElement('webview');
webview.addEventListener('loadstop', function() {
  window.parent.postMessage('WebViewTest.LAUNCHED', '*');
});
webview.addEventListener('loadabort', function() {
  window.parent.postMessage('WebViewTest.FAILURE', '*');
});
webview.src = 'data:text/html,<body>guest in sandboxed iframe</body>';
document.body.appendChild(webview);
