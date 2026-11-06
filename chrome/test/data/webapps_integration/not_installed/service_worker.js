// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker caching test assets for offline use
// summary: Service worker fixture that pre-caches the test page, manifest and icon and serves cached responses so the page works in offline test environments.
// ---

'use strict';

const urlsToCache = [
  '192x192-blue.png',
  'basic.html',
  'basic.json',
];

self.addEventListener('install', (event) => {
  event.waitUntil(
    caches.open('basic-cache').then((cache) => {
      return cache.addAll(urlsToCache);
    })
  );
});


self.addEventListener('fetch', (event) => {
  event.respondWith(
    caches.match(event.request).then((response) => {
      if (response) {
        return response;
      }
      return fetch(event.request);
    })
  );
});
