// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker classic script import fixture
// summary: Service worker that imports a classic script and serves its message variable for fetch events.
// ---

// global message var is provided by this classic script.
importScripts("/devtools/worker_imported_classic.js");

self.addEventListener('fetch', event => {
  event.respondWith(new Response(message));
});
self.addEventListener('activate', event => {
  event.waitUntil(clients.claim());
});