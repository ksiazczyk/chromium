// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Embedder script hosting the webview guest
// summary: Creates a webview pointing at the guest page on the test server and relays guest messages to the browser test via chrome.test.sendMessage.
// ---

window.onload = () => {
  chrome.test.getConfig(function(config) {
    var guestURL = 'http://localhost:' + config.testServer.port +
        '/extensions/platform_apps/web_view/touchpad_pinch/guest.html';
    var webview = document.createElement('webview');
    webview.src = guestURL;
    webview.addEventListener('loadstop', () => {
      webview.contentWindow.postMessage({}, '*');
    });
    document.body.appendChild(webview);
  });
};

window.addEventListener('message', (e) => {
  chrome.test.sendMessage(e.data);
});
