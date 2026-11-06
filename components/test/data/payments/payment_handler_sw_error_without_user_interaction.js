/*
 * Copyright 2026 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment handler service worker rejecting without user interaction
// summary: Service worker test app that rejects the payment promise immediately after its window reports being loaded.
// ---

self.addEventListener('canmakepayment', (evt) => {
  evt.respondWith(true);
});

let rejectPromise = null;

self.addEventListener('message', (evt) => {
  if (evt.data === 'loaded') {
    rejectPromise(new Error('Rejected immediately after window fully loaded.'));
  }
});

self.addEventListener('paymentrequest', (evt) => {
  evt.respondWith(new Promise((resolve, reject) => {
    rejectPromise = reject;
    evt.openWindow('payment_handler_window_reject.html');
  }));
});
