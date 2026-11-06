/*
 * Copyright 2020 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment Request Creator Script
// summary: Script that creates a PaymentRequest object for a given payment method identifier, triggering manifest downloads for URL-based methods.
// ---

/**
 * Creates a PaymentRequest object for the given |method|. If the |method| is
 * URL-based, that triggers manifest downloads.
 * @param {string} method - The payment method identifier to use.
 */
function createPaymentRequest(method) {
  new PaymentRequest(
      [{supportedMethods: method}],
      {total: {label: 'TEST', amount: {currency: 'USD', value: '0.01'}}});
}
