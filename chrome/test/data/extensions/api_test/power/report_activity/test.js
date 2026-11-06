// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background test script for the reportActivity extension
// summary: Listens for idle state changes and signals test success when the browser transitions from idle back to active during the chrome.power.reportActivity API test.
// ---

let wasIdle = false;
chrome.idle.onStateChanged.addListener((newState) => {
  // First state is set to be idle from the Chrome side of the test. We report
  // an activity once the state is idle.
  if (newState === 'idle') {
    wasIdle = true;
    chrome.test.sendMessage('idle');
  } else if (newState === 'active' && wasIdle) {
    // Only succeed a test if we go from "idle" to "active".
    chrome.test.succeed();
  }
});

chrome.test.sendMessage('ready');
