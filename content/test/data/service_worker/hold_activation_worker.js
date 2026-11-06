// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: hold_activation_worker.js service worker
// summary: Service worker test script that stays in the activating state until the /service_worker/hold_activation fetch completes.
// ---

// Keeps this service worker in the `activating` state until the response for
// `/service_worker/hold_activation` is received.
self.addEventListener('activate', e => {
  e.waitUntil(fetch('/service_worker/hold_activation'));
});
