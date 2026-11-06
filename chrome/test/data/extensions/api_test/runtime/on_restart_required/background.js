// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onRestartRequired test background script
// summary: Background script for the chrome.runtime.onRestartRequired API test that listens for the restart-required event and sends the reason to the test harness.
// ---

function onRestartRequired(reason) {
  chrome.test.sendMessage(reason);
}

chrome.runtime.onRestartRequired.addListener(onRestartRequired);
