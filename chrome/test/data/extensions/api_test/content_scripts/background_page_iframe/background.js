// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script that embeds an iframe in the test extension
// summary: Creates an iframe pointing to a cross-origin test server page and notifies the test runner with a message once the iframe has loaded.
// ---

chrome.test.getConfig(function(config) {
  const iframe = document.createElement('iframe');
  iframe.src =
      'http://a.com:' + config.testServer.port + '/extensions/test_file.html';
  iframe.onload = function() {
    chrome.test.sendMessage('iframe loaded');
  };
  document.body.appendChild(iframe);
});
