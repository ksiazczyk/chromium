// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: fetch_from_service_worker.js service worker
// summary: Service worker test script that fetches a URL received by message and posts the response text or error back to the page.
// ---

async function handleMessage(e) {
  try {
    const response = await fetch(e.data.url);
    if (!response.ok) {
      e.ports[0].postMessage('bad response');
      return;
    }
    const text = await response.text();
    e.ports[0].postMessage(text);
  } catch (error) {
    e.ports[0].postMessage(`${error}`);
  }
}

self.addEventListener('message', e => {
  e.waitUntil(handleMessage(e));
});
