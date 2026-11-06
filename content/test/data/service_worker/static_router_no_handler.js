// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Static router without fetch handler service worker
// summary: Service worker with a static route to the fetch-event source but no fetch listener, for testing fallback behavior.
// ---

self.addEventListener('install', e => {
  e.addRoutes([{
    condition: {
      requestMethod: "GET",
    },
    source: "fetch-event"
  }]);
  self.skipWaiting();
});

self.addEventListener('activate', e => {
  e.waitUntil(clients.claim());
});
