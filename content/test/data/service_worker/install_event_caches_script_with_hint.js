// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker caching a script with a code cache hint
// summary: Service worker test script that stores a fetched script in the cache with the CacheStorageCodeCacheHint header set to none during install.
// ---

self.addEventListener('install', evt => {
  evt.waitUntil(async function() {
    const cache_name = 'cache_name';
    const url = '/service_worker/v8_cache_test.js'

    const cache = await caches.open(cache_name);
    const orig_response = await fetch(url);
    const mutable_response = new Response(orig_response.body, orig_response);
    mutable_response.headers.append('x-CacheStorageCodeCacheHint', 'none');
    await cache.put(url, mutable_response);
  }());
});
