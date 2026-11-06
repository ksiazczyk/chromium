// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NTP page script for querying the background version
// summary: Script loaded by the custom new tab page that requests the background context version.
// ---

self.currentVersion = 2;

// Obtain the version of the background context.
async function getCurrentVersionOfBackgroundContext() {
  const response = await chrome.runtime.sendMessage('get-current-version');
  return response;
}
