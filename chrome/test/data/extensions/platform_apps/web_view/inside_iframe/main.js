// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test logic injecting a webview tag into the iframe
// summary: Injects a webview tag into the iframe's document, navigates it to a data URL, and sends LAUNCHED or FAILURE messages to chrome.test.
// ---

var startTest = function() {
  var iframe = document.querySelector('iframe');
  var iframeWindow = iframe.contentWindow;
  iframe.addEventListener('load', function(e) {
    iframeWindow.document.querySelector('#webview-tag-container').innerHTML =
        '<webview></webview>';
    var webview = iframeWindow.document.querySelector('webview');
    webview.addEventListener('loadstop', function(e) {
      if (!webview.contentWindow) {
        chrome.test.sendMessage('WebViewTest.FAILURE');
        return;
      }
      chrome.test.sendMessage('WebViewTest.LAUNCHED');
    });
    webview.src = 'data:text/html,<body>Guest</body>';
  });
  iframe.src = 'webview.html';
};

window.onload = startTest;
