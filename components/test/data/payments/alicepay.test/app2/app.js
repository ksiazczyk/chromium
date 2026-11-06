/*
 * Copyright 2017 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment app service worker for alicepay.test
// summary: Service worker that responds to canmakepayment and paymentrequest events to emulate a payment app in Chromium payment tests.
// ---

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(true);
});

self.addEventListener('paymentrequest', (evt) => {
  evt.respondWith({
    methodName: evt.methodData[0].supportedMethods,
    details: {transactionId: '123'},
  });
});
