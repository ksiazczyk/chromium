// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background listening for port connect and disconnect
// summary: Test service worker that fails if a message arrives from the content script and succeeds when the port disconnects.
// ---

chrome.runtime.onConnect.addListener(port => {
  // Expect no message from content script.
  port.onMessage.addListener(msg => {
    chrome.test.fail();
  });
  // Expect disconnect from content script.
  port.onDisconnect.addListener(() => {
    chrome.test.succeed();
  });
});
