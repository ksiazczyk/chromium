//  Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the getSelf extension test
// summary: Calls chrome.management.getSelf and asserts the returned extension name, type and enabled state, then signals test success.
// ---

chrome.management.getSelf(function(info) {
  chrome.test.assertNe(null, info);
  chrome.test.assertEq('Self Get Test (no permissions)', info.name);
  chrome.test.assertEq('extension', info.type);
  chrome.test.assertEq(true, info.enabled);
  chrome.test.sendMessage('success');
});
