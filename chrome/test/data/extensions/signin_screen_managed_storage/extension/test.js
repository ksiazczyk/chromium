// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Signin screen managed storage test script
// summary: Background script that runs a test asserting chrome.storage.managed returns the expected string-policy value on the signin screen.
// ---

chrome.runtime.onInstalled.addListener(function() {
  chrome.test.runTests([function getPolicy() {
    chrome.storage.managed.get(
        'string-policy', chrome.test.callbackPass(function(results) {
          chrome.test.assertEq({'string-policy': 'value'}, results);
        }));
  }]);
});
