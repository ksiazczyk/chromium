// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for content script API stubs test
// summary: Extension background service worker that answers API definition requests from the content script and reports test pass, log, or failure messages via chrome.test.
// ---

chrome.runtime.onMessage.addListener(function(msg, sender, responseFunc) {
  if (msg === 'getApi') {
    responseFunc(chrome.test.getApiDefinitions());
  } else if (msg === 'pass') {
    chrome.test.notifyPass();
  } else if (msg.substr(0, 3) === 'log') {
    chrome.test.log(msg);
  } else {
    chrome.test.notifyFail('failed');
  }
});

// On first install, send a success message so the test can continue.
chrome.test.notifyPass();
