// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Auto-update test background script
// summary: Background script for the v1 auto-update test extension that sends a 'v1 installed' message on page load.
// ---

window.onload = function() {
  chrome.test.sendMessage('v1 installed');
};
