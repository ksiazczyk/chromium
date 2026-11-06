// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: New note action handler test app script
// summary: Background script for a Chrome extension API test that checks whether the app was launched with the new_note action and reports the result via a test message.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  let isNewNote = false;
  if (launchData.actionData &&
      launchData.actionData.actionType === 'new_note') {
    isNewNote = true;
  }

  chrome.test.sendMessage('hasNewNote = ' + isNewNote);
});

chrome.test.sendMessage('loaded');
