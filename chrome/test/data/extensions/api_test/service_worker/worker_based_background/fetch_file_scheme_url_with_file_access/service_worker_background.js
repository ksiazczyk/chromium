// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background fetching a file scheme URL
// summary: Service worker test script that fetches a file scheme resource with file access and asserts its contents equal 'Hello!'.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    async function fetchFileSchemeResource() {
      const url = `${config.testDataDirectory}/../test_file.txt`;
      const response = await fetch(url);
      const text = await response.text();
      chrome.test.assertEq('Hello!', text);
      chrome.test.succeed();
    },
  ]);
});
