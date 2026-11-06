/*
 * Copyright 2019 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment handler service worker for show promise tests
// summary: Service worker that responds to canmakepayment and paymentrequest events, returning the payment method and total for PaymentRequest show promise tests.
// ---

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(true);
});

self.addEventListener('paymentrequest', (evt) => {
  evt.respondWith(
      {methodName: evt.methodData[0].supportedMethods, details: evt.total});
});
