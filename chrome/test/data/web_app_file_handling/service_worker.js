// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker for the file handling test app
// summary: Minimal service worker that activates immediately on install and passes fetch requests through to the network.
// ---

self.addEventListener('install', function() {
  // Activate worker immediately.
  return self.skipWaiting();
});

self.addEventListener('fetch', function(event) {
  event.respondWith(fetch(event.request));
});
