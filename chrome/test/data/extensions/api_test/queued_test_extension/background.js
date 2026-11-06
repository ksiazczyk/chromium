// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Queued test extension background script
// summary: Background service worker script that runs a single trivially succeeding chrome.test for the extension event queuing API test.
// ---

chrome.test.runTests([function myQueuedTest() {
  chrome.test.succeed();
}]);
