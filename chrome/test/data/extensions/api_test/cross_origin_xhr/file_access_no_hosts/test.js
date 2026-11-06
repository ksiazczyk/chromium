// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cross-origin XHR file access test without host permissions
// summary: Browser test asserting that an XMLHttpRequest to a file URL fails when the extension has no host permissions.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    function fileAccessNotAllowed() {
      const req = new XMLHttpRequest();

      const url = `${config.testDataDirectory}/../test_file.txt`;
      chrome.test.log(`Requesting url: ${url}`);
      req.open('GET', url, true);

      req.onload = function() {
        chrome.test.fail(`Unexpected success for url: ${url}`);
      };
      req.onerror = function() {
        chrome.test.assertEq(0, req.status);
        chrome.test.succeed();
      };

      req.send(null);
    },
  ]);
});
