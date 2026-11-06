// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker caching a no-cors script on install
// summary: Service worker test script that fetches a URL from the query string in no-cors mode during install and puts the response in the cache.
// ---

self.addEventListener('install', evt => {
  evt.waitUntil(async function() {
    const cache_name = 'cache_name';

    const url = new URLSearchParams(self.location.search).get('script_url');

    const cache = await caches.open(cache_name);
    const response = await fetch(url, { mode: 'no-cors' });
    await cache.put(url, response);
  }());
});
