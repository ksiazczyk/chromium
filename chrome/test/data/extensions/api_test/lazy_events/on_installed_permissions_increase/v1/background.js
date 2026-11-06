// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the onInstalled permissions increase test extension
// summary: Test extension background script that listens for runtime.onInstalled and signals the browser test passed.
// ---

chrome.runtime.onInstalled.addListener(() => {
  chrome.test.notifyPass();
});
