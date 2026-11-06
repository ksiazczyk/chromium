/*
 * Copyright 2026 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment handler service worker rejecting after user interaction
// summary: Service worker test app that opens a payment window and rejects the payment promise when the page signals a user-driven rejection.
// ---

let rejectPromise = null;
let paymentRequestEvent;
let methodName;

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(true);
});

self.addEventListener('message', (evt) => {
  if (evt.data === 'reject') {
    rejectPromise(new Error('Rejected'));
  } else if (evt.data === 'app_is_ready') {
    // Handshake via payment request event to signal the payment app is
    // ready.
    if (paymentRequestEvent) {
      paymentRequestEvent.changePaymentMethod(methodName, {
        status: 'success',
      });
    }
  }
});

self.addEventListener('paymentrequest', (evt) => {
  paymentRequestEvent = evt;
  methodName = evt.methodData[0].supportedMethods;
  evt.respondWith(new Promise((resolve, reject) => {
    rejectPromise = reject;
    evt.openWindow('payment_handler_window_reject.html');
  }));
});
