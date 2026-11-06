// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cross-origin XHR test expecting failure without file access
// summary: Chrome extension API test that expects an XMLHttpRequest for a file in the test data directory to fail when the extension lacks file scheme access despite holding host permissions for all URLs.
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
