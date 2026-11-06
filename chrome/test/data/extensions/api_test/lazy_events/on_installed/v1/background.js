// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onInstalled test extension background script
// summary: Background script of the v1 lazy events test extension that listens for chrome.runtime.onInstalled and notifies the browser test of success.
// ---

chrome.runtime.onInstalled.addListener(() => {
  chrome.test.notifyPass();
});
