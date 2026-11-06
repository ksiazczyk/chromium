// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: webRequest reload test background script
// summary: Background script for the webRequest reload API test that registers an onBeforeRequest listener and signals test completion via chrome.test.sendMessage, distinguishing incognito context.
// ---

chrome.webRequest.onBeforeRequest.addListener(
    function(details) {}, {
      urls: [],
      types: [],
    },
    []);
if (chrome.extension.inIncognitoContext) {
  chrome.test.sendMessage('done_incognito');
} else {
  chrome.test.sendMessage('done');
}
