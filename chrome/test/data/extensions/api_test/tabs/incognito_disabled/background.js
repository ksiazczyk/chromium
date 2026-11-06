// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Incognito disabled test background script
// summary: Runs a browser test asserting that creating an incognito window returns undefined when policy disallows it, then signals the test passed.
// ---

chrome.test.runTests([
  function createIncognitoWindow() {
    chrome.windows.create(
        {url: 'about:blank', incognito: true}, function(window) {
          chrome.test.assertEq(window, undefined);
          chrome.test.notifyPass();
        });
  },
]);
