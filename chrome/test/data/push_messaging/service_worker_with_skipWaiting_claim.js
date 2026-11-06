// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker with skipWaiting and clients.claim for push tests
// summary: Minimal service worker that skips waiting on install and claims clients on activation, used to replace the push test service worker.
// ---

self.addEventListener('install', () => skipWaiting());
self.addEventListener('activate', () => clients.claim());
