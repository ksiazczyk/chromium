// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NTP page script querying the background context version
// summary: Script loaded by ntp.html that sends a get-current-version message and returns the background service worker's version for the test.
// ---

self.currentVersion = 1;

// Obtain the version of the background context.
async function getCurrentVersionOfBackgroundContext() {
  const response = await chrome.runtime.sendMessage('get-current-version');
  return response;
}
