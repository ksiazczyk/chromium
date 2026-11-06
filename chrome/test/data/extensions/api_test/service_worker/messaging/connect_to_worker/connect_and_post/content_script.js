// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script keeping service worker alive via port messages
// summary: Content script that opens a runtime port and posts a message every 100 ms to prolong the extension service worker's lifetime during the connect-to-worker test.
// ---

const port = chrome.runtime.connect();

// Post messages to keep the service worker alive.
port.postMessage({msg: 'Hello'});
setInterval(() => {
  port.postMessage({msg: 'Hello'});
}, 100);  // Post message every 100ms to prolong SW lifetime.
