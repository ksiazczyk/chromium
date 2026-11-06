// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Back-forward cache test extension content script
// summary: Content script that modifies the document title and manages a runtime port connection, disconnecting on request, to verify content scripts block back/forward caching.
// ---

document.title = 'modified';

chrome.runtime.onConnect.addListener((p) => {
  p.postMessage('connected');
  p.onMessage.addListener((m) => {
    if (m === 'disconnect') {
      p.disconnect();
    }
  });
});
