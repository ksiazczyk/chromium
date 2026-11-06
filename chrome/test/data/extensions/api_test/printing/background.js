// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page for the printing test app
// summary: Chrome app background script that opens a window with the launch argument when the test app is started.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.getConfig(config => {
    chrome.app.window.create(config.customArg, {}, function() {});
  });
});
