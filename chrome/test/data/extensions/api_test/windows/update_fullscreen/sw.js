// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker that updates a window to fullscreen
// summary: Service worker that creates a window loading hello.html, updates its state to fullscreen, and sends the ready message to the test harness.
// ---

chrome.windows.create({'url': 'hello.html'}).then((window) => {
  chrome.windows.update(window.id, {'state': 'fullscreen'}).then(() => {
    chrome.test.sendMessage('ready');
  });
});
