// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window load notification script
// summary: Sends a window_loaded message to the test harness on page load so tests know the app window is up.
// ---

onload = function() {
  chrome.test.sendMessage('window_loaded');
};
