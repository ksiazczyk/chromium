// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebSocket service worker connection script
// summary: Service worker script that opens a WebSocket to the URL received in a message and replies PASS or FAIL to the page over a message port.
// ---

async function handleMessage(e) {
  const ws = new WebSocket(e.data.url);
  ws.onopen = () => e.ports[0].postMessage('PASS');
  ws.onclose = () => e.ports[0].postMessage('FAIL');
}


self.addEventListener('message', e => {
  e.waitUntil(handleMessage(e));
});
