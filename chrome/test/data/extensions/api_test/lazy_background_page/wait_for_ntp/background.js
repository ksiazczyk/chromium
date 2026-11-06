// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for lazy background page NTP test
// summary: Test extension background script that listens for runtime onInstalled and creates a new tab as part of the lazy background page NTP test.
// ---

chrome.runtime.onInstalled.addListener(function() {
  chrome.tabs.create({}, chrome.test.callbackPass());
});
