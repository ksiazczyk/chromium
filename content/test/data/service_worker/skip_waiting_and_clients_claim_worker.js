// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Skip waiting and clients claim test service worker
// summary: Service worker that calls skipWaiting on install and clients.claim on activate for testing service worker lifecycle behavior.
// ---

self.addEventListener('install', e => {
  self.skipWaiting();
});

self.addEventListener('activate', e => {
  e.waitUntil(clients.claim());
});
