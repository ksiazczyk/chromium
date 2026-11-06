// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for onInstalled permissions increase test v2
// summary: Test extension background script that listens for runtime.onInstalled and notifies the browser test of a pass.
// ---

chrome.runtime.onInstalled.addListener(() => {
  chrome.test.notifyPass();
});
