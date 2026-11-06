// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Offline fallback service worker for tests
// summary: Service worker that answers fetches with an offline fallback response, used by web apps integration tests.
// ---

'use strict';

self.addEventListener('fetch', event => {
  event.respondWith(fetch(event.request).catch(_ => {
    return new Response('Offline test.');
  }));
});
