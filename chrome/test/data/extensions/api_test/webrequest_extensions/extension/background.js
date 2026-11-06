// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script of the webRequest test extension that fetches a test file from the test server, asserts the response, and signals 'extension_done' to the test runner.
// ---

chrome.test.getConfig(function(config) {
  const baseUrl = 'http://example.com:' + config.testServer.port;

  const x = new XMLHttpRequest();
  x.open('GET', baseUrl + '/extensions/test_file.txt?extension');
  x.onloadend = function() {
    // Just a sanity check to ensure that the server is running.
    // The test does not change the response.
    chrome.test.assertEq('Hello!', x.responseText);

    chrome.test.sendMessage('extension_done');
  };
  x.send();
});
