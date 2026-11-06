/*
 * Copyright 2020 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Nick Pay payment handler service worker
// summary: Service worker that always reports it can make payments and responds to payment requests with a success status.
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
