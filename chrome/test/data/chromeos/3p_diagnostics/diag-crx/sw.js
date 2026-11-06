// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Diagnostics test extension service worker
// summary: Minimal service worker for the diagnostics test extension that logs installation and registers an empty external message listener.
// ---

chrome.runtime.onInstalled.addListener((details) => {
  console.log('Service worker is installed!', details);
});

chrome.runtime.onMessageExternal.addListener((req, sender, res) => {});
