// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for permission increase test v2
// summary: Sends the v2.onInstalled test message when the extension is updated from version 1, and FAILED otherwise.
// ---

chrome.runtime.onInstalled.addListener(function(detail) {
  if (detail.previousVersion === '1') {
    chrome.test.sendMessage('v2.onInstalled');
  } else {
    chrome.test.sendMessage('FAILED');
  }
});
