// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.tabs no-events test
// summary: Test script that listens for chrome.tabs onCreated, onRemoved and onUpdated events and fails if any unexpected events occur.
// ---

let errors = 0;

function errorListener() {
  ++errors;
}

chrome.tabs.onCreated.addListener(errorListener);
chrome.tabs.onRemoved.addListener(errorListener);
chrome.tabs.onUpdated.addListener(errorListener);

chrome.test.sendMessage('ready', function(message) {
  if (errors === 0) {
    chrome.test.notifyPass();
  } else {
    chrome.test.notifyFail('Unexpected chrome.tabs events');
  }
});
