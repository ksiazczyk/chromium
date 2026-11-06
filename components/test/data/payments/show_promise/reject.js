/*
 * Copyright 2019 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Show promise rejection test logic
// summary: Launches PaymentRequest.show() with a promise that rejects, printing and returning the error for Java and C++ browser tests.
// ---

/**
 * Launch PaymentRequest with a show promise and reject that promise.
 * @param {string} supportedMethods - The payment method identifier.
 * @return {string} - The error message, if any.
 */
async function buy(supportedMethods) {
  if (!supportedMethods) {
    print('supportedMethods required');
    return 'supportedMethods required';
  }
  try {
    await new PaymentRequest(
        [{supportedMethods}],
        {total: {label: 'Total', amount: {currency: 'USD', value: '1.00'}}})
        .show(new Promise(function(resolve, reject) {
          reject('rejected');
        }));
  } catch (error) {
    // Error is both printed and returned as the Java test reads it from the
    // page and the C++ browser test reads the return value.
    print(error);
    return error.toString();
  }
}
