// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for file scheme fetch test with file access
// summary: Extension background script that runs a test fetching a file scheme URL and asserts the returned text equals 'Hello!'.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([async function fetchFileSchemeResource() {
    const url = `${config.testDataDirectory}/../test_file.txt`;
    const response = await fetch(url);
    const text = await response.text();
    chrome.test.assertEq('Hello!', text);
    chrome.test.succeed();
  }]);
});
