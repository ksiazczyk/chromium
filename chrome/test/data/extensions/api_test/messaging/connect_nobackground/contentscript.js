// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for the connect_nobackground messaging test
// summary: Content script that listens for tab messages, replies to them, and opens and disconnects a runtime port to exercise extension messaging.
// ---

chrome.runtime.onMessage.addListener(function(message, sender, sendResponse) {
  chrome.test.assertEq('msg from tab', message);
  sendResponse('Reply here');
});

const port = chrome.runtime.connect();
port.postMessage('Hello from content script');
port.disconnect();
