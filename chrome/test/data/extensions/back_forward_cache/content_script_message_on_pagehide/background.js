// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for BFCache eviction test extension
// summary: Extension background script that listens on a runtime port and replies to pagehide messages with an evict message to trigger back-forward-cache eviction in tests.
// ---

chrome.runtime.onConnect.addListener((p) => {
  p.onMessage.addListener((m) => {
    if (m === 'pagehide') {
      // Posting a message to cause the BFCache eviction.
      p.postMessage('evict');
    }
  });
});
