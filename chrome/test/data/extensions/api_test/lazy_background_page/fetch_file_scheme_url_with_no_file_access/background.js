// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for file scheme fetch test
// summary: Runs a test asserting that fetching a file scheme URL fails with 'Failed to fetch' when the extension has no file access.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    async function fetchFileSchemeResource() {
      try {
        const url = `${config.testDataDirectory}/../test_file.txt`;
        await fetch(url);
        // The above call should fail, so this line should never be reached.
        chrome.test.fail();
      } catch (e) {
        chrome.test.assertEq('Failed to fetch', e.message);
        chrome.test.succeed();
      }
    },
  ]);
});
