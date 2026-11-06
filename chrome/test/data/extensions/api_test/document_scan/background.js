// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Chrome app background script for document scan API tests
// summary: Chrome app background script that opens the test page passed via the custom launch argument when the app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.getConfig(config => {
    chrome.app.window.create(config.customArg, {}, function() {});
  });
});
