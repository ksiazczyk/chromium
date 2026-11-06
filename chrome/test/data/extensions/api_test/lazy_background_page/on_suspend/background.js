// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onSuspend test extension background script
// summary: Background script for the lazy background page onSuspend test that listens for chrome.runtime.onSuspend and writes the current time to chrome.storage.local.
// ---

chrome.runtime.onSuspend.addListener(function() {
  const now = new Date();
  chrome.storage.local.set({last_save: now.toLocaleString()}, function() {
    console.info(`Finished writing last_save: ${now.toLocaleString()}`);
  });
});
