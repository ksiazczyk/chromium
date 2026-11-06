// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Webview setup logic for the a.com test app
// summary: Creates a webview element with a registered content script, loads a simple page from the test server on a.com, and reports loadstop or loadabort via test messages.
// ---

function createWebViewAndGuest(config) {
  var webview = document.createElement('webview');
  webview.addContentScripts([{
    name: 'rule',
    matches: ['*://*/*'],
    js: { files: ['content_script.js'] },
    run_at: 'document_idle'}]);

  webview.src = `http://a.com:${config.testServer.port}/simple.html`;
  document.body.appendChild(webview);

  var onLoadStop = function(e) {
    chrome.test.sendMessage('WebViewTest.LAUNCHED');
    webview.removeEventListener('loadstop', onLoadStop);
    webview.removeEventListener('loadabort', onLoadAbort);
  };
  webview.addEventListener('loadstop', onLoadStop);

  var onLoadAbort = function() {
    chrome.test.sendMessage('WebViewTest.FAILURE');
    webview.removeEventListener('loadstop', onLoadStop);
    webview.removeEventListener('loadabort', onLoadAbort);
  };
  webview.addEventListener('loadabort', onLoadAbort);
}

onload = function() {
  chrome.test.getConfig(function(config) {
    createWebViewAndGuest(config);
  });
};
