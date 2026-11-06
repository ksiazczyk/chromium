// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Auto-update test extension background script
// summary: Background script of the v2 auto-update test extension that signals 'v2 installed' via chrome.test on page load.
// ---

window.onload = function() {
  chrome.test.sendMessage('v2 installed');
};
