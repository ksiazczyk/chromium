// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared module import check script
// summary: Verifies that pass.js from the imported shared module was exported and notifies the test result via chrome.test.
// ---

if (typeof passExported === 'undefined') {
  chrome.test.notifyFail('pass.js was not exported correctly.');
}

chrome.test.notifyPass();
