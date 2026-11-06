// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// API test for chrome.tabs.captureVisibleTab(), when current window is null
// browser_tests.exe --gtest_filter=ExtensionApiTest.CaptureNullWindow

// ---docerion
// type: test
// title: API test for captureVisibleTab with a null window
// summary: Background script of a browser test extension that verifies chrome.tabs.captureVisibleTab reports an error when given an invalid window ID.
// ---

chrome.test.runTests([function captureNullWindow() {
  // Window IDs are non-negative, so -1 is invalid.
  const invalidWindowId = -1;
  chrome.tabs.captureVisibleTab(invalidWindowId, function() {
    const error = `No window with id: ${invalidWindowId}.`;
    chrome.test.assertTrue(!!chrome.runtime.lastError);
    const actualError = chrome.runtime.lastError.message;
    chrome.test.assertTrue(actualError === error);
    chrome.test.succeed();
  });
}]);
