// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script for the onStartup event test
// summary: Service worker that listens for chrome.runtime.onStartup and sends a test message so the browser test can verify the event is delivered.
// ---

chrome.runtime.onStartup.addListener(() => {
  chrome.test.sendMessage('onStartup event');
});

chrome.test.notifyPass();
