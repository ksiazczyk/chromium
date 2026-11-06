/*
 * Copyright 2019 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: PaymentRequest retry test helper
// summary: Test helper that shows the payment sheet with basic-card or URL-based methods and retries it with validation error messages after payer detail changes.
// ---

let gPaymentResponse = null;
let gRetryPromise = null;

/**
 * Launches the PaymentRequest UI
 */
function buy() {
  buyWithMethod([{supportedMethods: 'basic-card'}]);
}

/**
 * Launches the PaymentRequest UI
 */
function buyWithUrlMethod() {
  buyWithMethod([
    {supportedMethods: 'https://bobpay.test'},
    {supportedMethods: 'https://kylepay.test/webpay'},
  ]);
}

/**
 * Launches the PaymentRequest UI
 * @param {string} method The payment method to request
 */
function buyWithMethod(method) {
  const options = {
    requestPayerEmail: true,
    requestPayerName: true,
    requestPayerPhone: true,
    requestShipping: true,
  };
  getPaymentResponseWithMethod(options, method)
      .then(function(response) {
        gPaymentResponse = response;
        const eventPromise = new Promise(function(resolve) {
          gPaymentResponse.addEventListener('payerdetailchange', resolve);
        });
        eventPromise.then(function() {
          gRetryPromise.then(function() {
            print(JSON.stringify(gPaymentResponse, undefined, 2));
            gPaymentResponse.complete('success');
          });
        });
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

  gRetryPromise = gPaymentResponse.retry(validationErrors);
}
