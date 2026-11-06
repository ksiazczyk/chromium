// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background counting port messages for test success
// summary: Service worker that counts incoming port messages and reports test success after 20 messages, verifying the worker stays alive for at least two seconds.
// ---

let messageCount = 0;
chrome.runtime.onConnect.addListener(port => {
  // Prevent port to be garbage collected, which may result in closing
  // the port.
  self.port = port;
  port.onMessage.addListener(msg => {
    messageCount++;
    // Messages are sent every 100ms.
    // This means the service worker is alive for at least 2 seconds.
    if (messageCount === 20) {
      chrome.test.succeed();
    }
  });
});
