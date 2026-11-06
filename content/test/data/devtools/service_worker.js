// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch interception fixture
// summary: Service worker that intercepts fetch requests with a fixed response and claims clients on activation.
// ---

self.addEventListener('fetch', event => {
  event.respondWith(new Response('intercepted'));
});
self.addEventListener('activate', event => {
  event.waitUntil(clients.claim());
});