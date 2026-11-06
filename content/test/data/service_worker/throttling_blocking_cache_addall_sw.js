// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Throttling blocking cache addAll service worker
// summary: Service worker test fixture that adds three blocking empty.js resources to a cache during installation.
// ---

self.addEventListener('install', evt => {
  evt.waitUntil(async function() {
    const c = await caches.open('foo');
    return c.addAll([
      './empty.js?1&block',
      './empty.js?2&block',
      './empty.js?3&block',
    ]);
  }());
});
