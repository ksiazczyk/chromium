// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebRequest test app background script
// summary: Background script for the WebRequest API test app that fetches a test file from the test server, checks the response, and signals app_done.
// ---

chrome.test.getConfig(function(config) {
  const baseUrl = 'http://example.com:' + config.testServer.port;

  const x = new XMLHttpRequest();
  x.open('GET', baseUrl + '/extensions/test_file.txt?app');
  x.onloadend = function() {
    // Just a sanity check to ensure that the server is running.
    // The test does not change the response.
    chrome.test.assertEq('Hello!', x.responseText);
    chrome.test.sendMessage('app_done');
  };
  x.send();
});
