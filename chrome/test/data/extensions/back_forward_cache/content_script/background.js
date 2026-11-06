// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Back-forward cache test extension background service worker
// summary: Background service worker for the test extension that accepts external connections, posts a connected message, and disconnects the port on request during back/forward cache tests.
// ---

let port;

chrome.runtime.onConnectExternal.addListener((p) => {
  // Save a "global" reference to the port so it can be used by the test later.
  port = p;
  p.postMessage('connected');
  p.onMessage.addListener((m) => {
    if (m === 'disconnect') {
      p.disconnect();
    }
  });
});
