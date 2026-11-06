// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker for web app shortcuts tests
// summary: Service worker that responds to fetch events with an offline fallback page, used as test data for web app shortcuts.
// ---

self.addEventListener('fetch', e => {
  e.respondWith((async () => {
    try {
      return await fetch(e.request);
    } catch (error) {
      return new Response('Hello offline page');
    }
  })());
});
