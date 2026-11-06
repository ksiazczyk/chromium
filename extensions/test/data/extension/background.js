// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script of the test extension that signals a passing test via chrome.test.notifyPass when the page loads.
// ---

window.addEventListener('load', function() {
  chrome.test.notifyPass();
});
