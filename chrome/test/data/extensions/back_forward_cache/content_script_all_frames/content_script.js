// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BFCache test extension content script
// summary: Content script for the back/forward cache test extension that sets the document title to 'modified' and handles runtime connections with disconnect support.
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
