// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser Action Popup test popup script
// summary: Sends the chrome.test message 'Popup opened' after the window loads, signaling that the popup is shown.
// ---

// Wait for the window to fully load, since that's when the popup is shown.
window.onload = function() {
  window.setTimeout(function() {
    chrome.test.sendMessage('Popup opened');
  }, 0);
};
