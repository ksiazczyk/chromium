// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fallback service worker
// summary: Service worker that responds to fetches with an added X-Fallback-Service-Worker header and no-store caching for MIME handler tests.
// ---

self.addEventListener('fetch', event => {
  const headers = new Headers(event.request.headers);
  headers.set('X-Fallback-Service-Worker', '1');
  event.respondWith(
      fetch(new Request(event.request, {headers, cache: 'no-store'})));
});
