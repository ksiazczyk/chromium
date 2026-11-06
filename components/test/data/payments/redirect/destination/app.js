/*
 * Copyright 2022 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Redirect destination payment handler service worker
// summary: Service worker that responds to canmakepayment with true and to payment requests with a success status for the redirect destination test payment handler.
// ---

self.addEventListener('canmakepayment', (event) => {
  event.respondWith(true);
});

self.addEventListener('paymentrequest', (event) => {
  event.respondWith({
    methodName: event.methodData[0].supportedMethods,
    details: {status: 'success'},
  });
});
