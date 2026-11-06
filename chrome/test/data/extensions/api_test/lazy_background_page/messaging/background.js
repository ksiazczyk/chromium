// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy background page messaging test background script
// summary: Background script of the test extension that listens on a runtime connect port and signals test success when a message arrives.
// ---

chrome.runtime.onConnect.addListener(function(port) {
  port.onMessage.addListener(function(msg) {
    chrome.test.notifyPass();
  });
});
