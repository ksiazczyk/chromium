// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script posting pagehide messages to the extension
// summary: Content script that modifies the document title and notifies the extension background over a port when the pagehide event fires.
// ---

document.title = 'modified';

const port = chrome.runtime.connect();

window.addEventListener('pagehide', () => {
  port.postMessage('pagehide');
});
