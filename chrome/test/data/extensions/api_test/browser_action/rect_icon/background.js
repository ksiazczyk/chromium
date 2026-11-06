// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script setting a rectangular browser action icon
// summary: Test extension background script that sets the browser action icon to rectangle.png, asserts no error occurred, and notifies the test pass.
// ---

chrome.test.sendMessage('ready', function() {
  chrome.browserAction.setIcon({path: 'rectangle.png'}, function() {
    chrome.test.assertNoLastError();
    chrome.test.notifyPass();
  });
});
