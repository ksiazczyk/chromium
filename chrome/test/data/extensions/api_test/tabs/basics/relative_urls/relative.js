// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page script signaling load via chrome.runtime message
// summary: Sends a chrome.runtime message on window load so tests can confirm that a tab or window opened the relative page successfully.
// ---

window.onload = function() {
  chrome.runtime.sendMessage('relative.js');
};
