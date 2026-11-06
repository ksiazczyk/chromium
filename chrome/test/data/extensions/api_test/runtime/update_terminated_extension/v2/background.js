// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the update terminated extension test
// summary: Background script of the version 2 test extension that asserts the previous version was 1 on install and signals test success.
// ---

chrome.runtime.onInstalled.addListener(details => {
  chrome.test.assertEq('1', details.previousVersion);
  chrome.test.notifyPass();
});
