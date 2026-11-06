// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for chrome.syncFileSystem.getFileSyncStatus
// summary: Test steps that request a sync file system, create a Test.txt file, and assert its sync status is pending using the mocked value.
// ---

const testStep = [
  function() {
    chrome.syncFileSystem.requestFileSystem(testStep.shift());
  },
  // Create empty file.
  function(fileSystem) {
    fileSystem.root.getFile(
        'Test.txt', {create: true}, testStep.shift(), errorHandler);
  },
  // Confirm file is pending as this is the mocked value.
  function(fileEntry) {
    chrome.syncFileSystem.getFileStatus(fileEntry, testStep.shift());
  },
  function(fileStatus) {
    chrome.test.assertEq('pending', fileStatus);
    chrome.test.succeed();
  },
];

function errorHandler(e) {
  console.info(`Failed test with error ${e.name}`);
  chrome.test.fail();
}

chrome.test.runTests([
  testStep.shift(),
]);
