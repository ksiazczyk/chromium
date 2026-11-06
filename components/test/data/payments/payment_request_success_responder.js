/*
 * Copyright 2020 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Success payment responder service worker
// summary: Service worker test responder that answers canmakepayment with true and paymentrequest with a success response.
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
