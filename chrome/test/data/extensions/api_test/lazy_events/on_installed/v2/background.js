// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the onInstalled lazy events test
// summary: Background script that listens for the extension's runtime.onInstalled event and signals a passing test via chrome.test.notifyPass.
// ---

chrome.runtime.onInstalled.addListener(() => {
  chrome.test.notifyPass();
});
