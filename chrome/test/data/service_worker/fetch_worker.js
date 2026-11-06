// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker that performs fetch commands
// summary: Test service worker that runs fetch with a requested mode on a fetch command and reports SUCCESS or FAILURE with the error.
// ---

self.addEventListener('message', (event) => {
  if (event.data.command === 'fetch') {
    const replyPort = event.ports[0];
    event.waitUntil((async () => {
      try {
        await fetch(event.data.url, {mode: event.data.mode});
        replyPort.postMessage({status: 'SUCCESS'});
      } catch (e) {
        replyPort.postMessage({
          status: 'FAILURE',
          error: `${e.name}: ${e.message}`,
        });
      }
    })());
  }
});
