// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BFCache test extension background script
// summary: Background script for the back/forward cache test extension that accepts external connections, posts a connected message, and disconnects the port on request.
// ---

chrome.runtime.onConnectExternal.addListener((p) => {
  p.postMessage('connected');
  p.onMessage.addListener((m) => {
    if (m === 'disconnect') {
      p.disconnect();
    }
  });
});
