// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Conflict resolution policy API test steps
// summary: Browser test that sets and gets the sync file system conflict resolution policy, expecting manual policy to fail and last_write_win to be returned.
// ---

const callbackPass = chrome.test.callbackPass;
const callbackFail = chrome.test.callbackFail;

const testStep = [
  function testNonDefaultConflictResolutionPolicy() {
    chrome.syncFileSystem.setConflictResolutionPolicy(
        'manual',
        callbackFail('Policy manual is not supported.', testStep.shift()));
  },
  function setConflictResolutionPolicy() {
    chrome.syncFileSystem.setConflictResolutionPolicy(
        'last_write_win', callbackPass(testStep.shift()));
  },
  function getConflictResolutionPolicy() {
    chrome.syncFileSystem.getConflictResolutionPolicy(
        callbackPass(testStep.shift()));
  },
  function checkConflictResolutionPolicy(policyReturned) {
    chrome.test.assertEq('last_write_win', policyReturned);
    chrome.test.succeed();
  },
];

chrome.test.runTests([
  testStep.shift(),
]);
