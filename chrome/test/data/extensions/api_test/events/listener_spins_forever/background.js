// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker that spins forever on navigation
// summary: Test extension service worker that asynchronously acks the install event and loops infinitely in a webNavigation.onBeforeNavigate listener to prevent renderer acknowledgement in browser tests.
// ---

chrome.runtime.onInstalled.addListener((details) => {
  // Asynchronously send the message that the listener fired so that the event
  // is considered ack'd in the browser C++ code.
  setTimeout(() => {
    chrome.test.sendMessage('installed listener fired');
  }, 0);
});

chrome.webNavigation.onBeforeNavigate.addListener((details) => {
  // Loop infinitely to prevent the acknowledgement from the renderer back to
  // browser process.
  while (true) {
  }
});
