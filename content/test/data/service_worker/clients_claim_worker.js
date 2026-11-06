// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker claiming clients on activation
// summary: Service worker test script that calls clients.claim() within its activate event handler.
// ---

self.addEventListener('activate', e => {
  e.waitUntil(clients.claim());
});
