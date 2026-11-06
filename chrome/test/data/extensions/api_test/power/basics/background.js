// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.power basics API test background script
// summary: Runs a browser test that calls chrome.power.requestKeepAwake and releaseKeepAwake for system and display, then reports success via chrome.test.
// ---

// A test that exercises the API method calls.
function testBasics() {
  chrome.power.requestKeepAwake('system');
  chrome.power.releaseKeepAwake();

  chrome.power.requestKeepAwake('display');
  chrome.power.releaseKeepAwake();

  chrome.test.succeed();
}

chrome.test.runTests([testBasics]);
