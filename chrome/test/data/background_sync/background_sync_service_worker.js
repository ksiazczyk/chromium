// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background Sync browser test service worker
// summary: Service worker for the browser test that skips waiting, claims clients, and fetches the test page with a syncreceived query when a sync event fires.
// ---

'use strict';

// Service Worker initialization listeners.
self.addEventListener('install', e => e.waitUntil(skipWaiting()));
self.addEventListener('activate', e => e.waitUntil(clients.claim()));

self.addEventListener('sync', e => {
  e.waitUntil(fetch(
    '/background_sync/background_sync_browsertest.html?syncreceived'));
});
