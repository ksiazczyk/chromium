// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the on-clicked action test extension
// summary: Test extension background script that listens for browser action clicks and signals a passing test via chrome.test.notifyPass.
// ---

chrome.action.onClicked.addListener((tab) => {
  chrome.test.notifyPass();
});
