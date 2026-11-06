// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cross origin XHR file access test script
// summary: Browser test that requests a test data file via XHR and asserts the expected response text, failing on request errors.
// ---

chrome.test.getConfig(config => {
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
