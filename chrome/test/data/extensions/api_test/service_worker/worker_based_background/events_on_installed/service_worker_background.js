// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script for onInstalled test
// summary: Service worker background script that registers a chrome.runtime.onInstalled listener and reports success via chrome.test.succeed.
// ---

chrome.runtime.onInstalled.addListener(function() {
  chrome.test.succeed();
});
