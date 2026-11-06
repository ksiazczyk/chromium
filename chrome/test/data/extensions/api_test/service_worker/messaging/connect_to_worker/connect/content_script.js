// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for port connect test
// summary: Content script that opens a long-lived runtime port, keeps a reference to prevent garbage collection, and succeeds the test when a message arrives.
// ---

// Store the port to prevent it from garbage collection, which may result
// in closing the port.
window.port = chrome.runtime.connect();
window.port.onMessage.addListener(msg => {
  chrome.test.succeed();
});
