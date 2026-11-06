// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for the pagehide messaging test
// summary: Content script that sends a runtime message when the page hides and signals readiness to the test harness.
// ---

window.addEventListener('pagehide', function() {
  chrome.runtime.sendMessage('Unloading');
});

chrome.test.sendMessage('listening');
