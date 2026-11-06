// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.idle.queryState API tests
// summary: Service worker test script that runs queryState tests asserting active, idle, and locked states based on a custom argument.
// ---

const availableTests = [

  function queryStateActive() {
    chrome.idle.queryState(15, function(idleState) {
      chrome.test.assertEq('active', idleState);
      chrome.test.succeed();
    });
  },

  function queryStateIdle() {
    chrome.idle.queryState(15, function(idleState) {
      chrome.test.assertEq('idle', idleState);
      chrome.test.succeed();
    });
  },

  function queryStateLocked() {
    chrome.idle.queryState(15, function(idleState) {
      chrome.test.assertEq('locked', idleState);
      chrome.test.succeed();
    });
  },

];

chrome.test.getConfig(function(config) {
  chrome.test.runTests(availableTests.filter(function(op) {
    return op.name === config.customArg;
  }));
});
