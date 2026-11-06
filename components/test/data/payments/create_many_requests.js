/*
 * Copyright 2020 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Create many PaymentRequest objects test
// summary: Creates 1024 PaymentRequest instances with the secure-payment-confirmation method to exercise many concurrent requests.
// ---

const supportedInstruments = [{
  supportedMethods: 'secure-payment-confirmation',
  data: {
    'credentialIds': [new ArrayBuffer(4)],
    'challenge': new ArrayBuffer(4),
  },
}];

const details = {
  total: {label: 'Total', amount: {currency: 'USD', value: '55.00'}},
};

for (let i = 0; i < 0x400; i++) {
  new PaymentRequest(supportedInstruments, details);
}
