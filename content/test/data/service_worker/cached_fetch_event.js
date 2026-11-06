// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker serving fetch events from cache
// summary: Service worker test script that caches a resource during install and answers fetch events by matching it in the cache.
// ---

const name = 'test_cache';
const resource = '/service_worker/v8_cache_test.js';

self.addEventListener('install', evt => {
  evt.waitUntil(async function() {
    const c = await caches.open(name);
    await c.addAll([resource]);
  }());
});

self.addEventListener('fetch', evt => {
  evt.respondWith(async function() {
    const c = await caches.open(name);
    return c.match(new Request(resource, { headers: evt.request.headers }));
  }());
});
