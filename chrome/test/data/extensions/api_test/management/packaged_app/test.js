// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Packaged app test background script
// summary: Background script for the packaged app fixture that listens for app launch and does nothing.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  // Do nothing.
});
