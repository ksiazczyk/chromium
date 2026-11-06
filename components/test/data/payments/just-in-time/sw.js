/*
 * Copyright 2021 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment handler service worker
// summary: Service worker that responds to canmakepayment and paymentrequest events to emulate a payment handler in just-in-time installation tests.
// ---

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(true);
});

self.addEventListener('paymentrequest', (evt) => {
  evt.respondWith({
    methodName: evt.methodData[0].supportedMethods,
    details: {status: 'success'},
  });
});
