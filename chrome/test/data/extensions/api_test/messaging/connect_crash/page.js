// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script asserting no disconnect when the tab crashes
// summary: Content script that opens a runtime port, fails the test if onDisconnect fires, and keeps the message channel open after receiving the 'Rob says hi' message.
// ---

const port = chrome.runtime.connect();
port.onDisconnect.addListener(function() {
  chrome.test.fail(
      'onDisconnect should not be triggered because the ' +
      'background page exists and the tab should have been crashed');
});

let ref;
chrome.runtime.onMessage.addListener(function(msg, sender, sendResponse) {
  chrome.test.assertEq('Rob says hi', msg);
  port.postMessage('is_ready_to_crash');
  // Keep the callback around to avoid test flakiness due to GC.
  ref = sendResponse;

  // Keep the port open - do not send a response.
  return true;
});
