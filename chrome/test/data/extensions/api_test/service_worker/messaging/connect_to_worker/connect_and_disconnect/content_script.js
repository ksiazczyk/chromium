// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that connects and disconnects a runtime port
// summary: Test content script that opens a runtime port to the extension, expects no messages from the service worker, and then disconnects.
// ---

const port = chrome.runtime.connect();
port.onMessage.addListener(msg => {
  // Expect no messages from the extension SW.
  chrome.test.fail();
});
port.disconnect();
