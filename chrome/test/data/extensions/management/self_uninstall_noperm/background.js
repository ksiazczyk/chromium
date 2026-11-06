// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script that self-uninstalls the test extension
// summary: Test extension background script that calls chrome.management.uninstallSelf() on install so browser tests can exercise self-uninstall without permissions.
// ---

// Wait for the API test framework to decide we're done loading before
// uninstalling, or it'll wait forever.
chrome.runtime.onInstalled.addListener(function() {
  chrome.management.uninstallSelf();
});
