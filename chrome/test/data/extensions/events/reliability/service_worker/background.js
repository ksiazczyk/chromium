// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script for event dispatch testing
// summary: Test extension service worker that listens for onInstalled and webNavigation events and asynchronously reports listener firing via chrome.test.sendMessage.
// ---

chrome.runtime.onInstalled.addListener((details) => {
  // Asynchronously send the message that the listener fired so that the event
  // is considered ack'd in the browser C++ code.
  setTimeout(() => {
    chrome.test.sendMessage('installed listener fired');
  }, 0);
});

chrome.webNavigation.onBeforeNavigate.addListener((details) => {
  // Asynchronously send the message that the listener fired so that the event
  // is considered ack'd in the browser C++ code.
  setTimeout(() => {
    chrome.test.sendMessage('listener fired');
  }, 0);
});
