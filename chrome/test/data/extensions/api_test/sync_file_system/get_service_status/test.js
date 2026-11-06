// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for chrome.syncFileSystem.getServiceStatus
// summary: Runs test steps that request a sync file system, call getServiceStatus, and assert the returned status equals 'disabled'.
// ---

const testSteps = [
  function() {
    chrome.syncFileSystem.requestFileSystem(
        chrome.test.callbackPass(testSteps.shift()));
  },
  function() {
    chrome.syncFileSystem.getServiceStatus(
        chrome.test.callbackPass(testSteps.shift()));
  },
  function(status) {
    chrome.test.getConfig(function(config) {
      chrome.test.assertEq('disabled', status);
    });
  },
];

chrome.test.runTests([
  testSteps.shift(),
]);
