// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onLaunched event test background script
// summary: Background script that listens for the app onLaunched event and signals the test harness with a Launched message and a pass notification.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.sendMessage('Launched');
  chrome.test.notifyPass();
});
