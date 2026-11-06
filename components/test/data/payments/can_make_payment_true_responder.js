/*
 * Copyright 2020 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Service worker responder answering canmakepayment with true
// summary: Minimal service worker test fixture that always responds to the canmakepayment event with true.
// ---

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(true);
});
