// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for back/forward cache disconnect test
// summary: Content script of the test extension that modifies the document title and disconnects connected ports when asked.
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
