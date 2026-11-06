/*
 * Copyright 2018 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Service worker for the Harry.Example test payment handler
// summary: Service worker that answers canmakepayment and paymentrequest events to simulate a working payment handler in tests.
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
