// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cross-origin XHR to file URL test with all URLs permission
// summary: Browser test that requests a file URL via XMLHttpRequest and asserts the response text equals Hello! to verify file access is allowed.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    function fileAccessAllowed() {
      const req = new XMLHttpRequest();

      const url = `${config.testDataDirectory}/../test_file.txt`;
      chrome.test.log(`Requesting url: ${url}`);
      req.open('GET', url, true);

      req.onload = function() {
        chrome.test.assertEq('Hello!', req.responseText);
        chrome.test.succeed();
      };
      req.onerror = function() {
        chrome.test.log(`status: ${req.status}`);
        chrome.test.log(`text: ${req.responseText}`);
        chrome.test.fail(`Unexpected error for url: ${url}`);
      };

      req.send(null);
    },
  ]);
});
