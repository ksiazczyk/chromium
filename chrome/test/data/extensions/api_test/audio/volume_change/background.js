// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Audio volume change test background script
// summary: Background script for the chrome.audio API test extension that listens once for onLevelChanged and asserts device ID 30001 with level 60 before reporting the extension as loaded.
// ---

chrome.test.runTests([
  function waitForLevelChangedEventTests() {
    chrome.test.listenOnce(chrome.audio.onLevelChanged, function(evt) {
      chrome.test.assertEq('30001', evt.deviceId);
      chrome.test.assertEq(60, evt.level);
    });
  },
]);

chrome.test.sendMessage('loaded');
