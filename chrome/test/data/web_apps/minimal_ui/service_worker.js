// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Site B service worker with offline fallback response
// summary: Service worker for the Site B test app that responds with an 'Offline test.' body when a fetch fails.
// ---

'use strict';

self.addEventListener('fetch', event => {
  event.respondWith(fetch(event.request).catch(_ => {
    return new Response('Offline test.');
  }));
});
