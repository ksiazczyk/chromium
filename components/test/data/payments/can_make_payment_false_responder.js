/*
 * Copyright 2022 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Can make payment false responder service worker
// summary: Service worker test stub that always responds false to canmakepayment events.
// ---

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(false);
});
