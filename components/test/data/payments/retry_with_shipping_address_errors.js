/*
 * Copyright 2018 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Retry test helper with shipping address errors
// summary: Test helper that requests shipping and retries the payment response with shipping address validation error messages.
// ---

let gPaymentResponse = null;

/**
 * Launches the PaymentRequest UI
 */
function buy() {
  const options = {
    requestShipping: true,
  };
  getPaymentResponse(options)
      .then(function(response) {
        gPaymentResponse = response;
      });
}

/**
 * Retry PaymentRequest UI with indicating validation error messages.
 *
 * @param {PaymentValidationErrors} validationErrors Represent validation errors
 */
function retry(validationErrors) {
  if (gPaymentResponse == null) {
    return;
  }

  gPaymentResponse.retry(validationErrors);
}
