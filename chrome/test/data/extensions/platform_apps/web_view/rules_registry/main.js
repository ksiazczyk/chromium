// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Webview rules registry test app script
// summary: Creates a webview element in the test app page and notifies the browser test via message once the webview load completes.
// ---

var startTest = function() {
  document.querySelector('#webview-tag-container').innerHTML =
      '<webview style="width: 10px; height: 10px; margin: 0; padding: 0;"' +
      '></webview>';

  var webview = document.querySelector('webview');
  var onLoadStop = function(e) {
    chrome.test.sendMessage('WebViewTest.LAUNCHED');
  };

  webview.addEventListener('loadstop', onLoadStop);
  webview.src = 'data:text/html,<body>Guest</body>';
};

window.onload = startTest;
