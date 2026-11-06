// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy background page onInstalled test background script
// summary: Background script for the lazy background page test extension that listens for the runtime onInstalled event and signals test success.
// ---

chrome.runtime.onInstalled.addListener(function() {
  chrome.test.notifyPass();
});
