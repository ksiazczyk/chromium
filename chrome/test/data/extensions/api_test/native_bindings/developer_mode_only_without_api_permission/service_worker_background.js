// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test asserting chrome.debugger is undefined
// summary: Service worker test that verifies the chrome.debugger API is undefined for an extension in developer mode without API permission.
// ---

chrome.test.runTests([function testDevModeApiIsUndefined() {
  chrome.test.assertEq(undefined, chrome.debugger);
  chrome.test.succeed();
}]);
