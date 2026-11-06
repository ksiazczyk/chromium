// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for chrome.syncFileSystem.getUsageAndQuota
// summary: Runs test steps that request a sync file system, query its usage and quota, and assert zero usage and a quota not equal to 123456.
// ---

const testStep = [
  function() {
    chrome.syncFileSystem.requestFileSystem(testStep.shift());
  },
  function(fs) {
    chrome.syncFileSystem.getUsageAndQuota(fs, testStep.shift());
  },
  function(info) {
    chrome.test.getConfig(function(config) {
      chrome.test.assertEq(0, info.usageBytes);
      chrome.test.assertNe(123456, info.quotaBytes);
      chrome.test.succeed();
    });
  },
];

chrome.test.runTests([
  testStep.shift(),
]);
