// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page script signaling page2 ok
// summary: Script for the second test page that sends a 'page2 ok' message through chrome.test when it runs.
// ---

if (chrome.test) {
  chrome.test.sendMessage('page2 ok');
}
