// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker using navigation preload
// summary: Test service worker that enables navigation preload on activation and responds to navigations with the preloaded response.
// ---

self.addEventListener('activate', event => {
  event.waitUntil(self.registration.navigationPreload.enable());
});

self.addEventListener('fetch', event => {
  if (event.request.mode == 'navigate')
    event.respondWith(event.preloadResponse);
});
