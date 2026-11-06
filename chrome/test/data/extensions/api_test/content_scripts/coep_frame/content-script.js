// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for COEP frame test extension
// summary: Injects an iframe loading the extension's iframe.html and verifies that a no-cors cross-origin fetch without CORP headers is blocked under COEP, marking the page PASSED or FAILED.
// ---

(async () => {
  try {
    const iframe = document.createElement('iframe');
    iframe.src = chrome.runtime.getURL('iframe.html?href=' + location.href);
    document.body.appendChild(iframe);

    await Promise.all([
      new Promise((resolve, reject) => {
        iframe.onload = resolve;
        iframe.onerror = reject;
      }),
      new Promise((resolve, reject) => {
        // The fetch request made from |iframe| is a no-cors cross-origin
        // request, and the response doesn't have a CORP header.
        // Hence it should be blocked (note that COEP is enabled on *this*
        // frame, and hence on |iframe|).
        self.addEventListener('message', (e) => {
          if (e.data === 'SUCCESS') {
            reject(Error('fetch succeeded unexpectedly'));
            return;
          }
          if (e.data === 'FAIL') {
            resolve();
          }
        });
      }),
    ]);
    document.title = 'PASSED';
  } catch (e) {
    document.title = 'FAILED';
  }
})();
