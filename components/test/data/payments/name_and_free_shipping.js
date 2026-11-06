/*
 * Copyright 2016 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: PaymentRequest name and free shipping test
// summary: Launches PaymentRequest with basic card requesting payer name and free global shipping.
// ---

/**
 * Launches the PaymentRequest UI that request a payer name and offers free
 * shipping worldwide.
 */
function buy() {
  try {
    const request = new PaymentRequest(
        [{supportedMethods: 'basic-card', data: {supportedNetworks: ['visa']}}],
        {
          total: {label: 'Total', amount: {currency: 'USD', value: '5.00'}},
          shippingOptions: [{
            id: 'freeShippingOption',
            label: 'Free global shipping',
            amount: {currency: 'USD', value: '0'},
            selected: true,
          }],
        },
        {requestPayerName: true, requestShipping: true});
    request.show()
        .then(function(resp) {
          resp.complete('success')
              .then(function() {
                print(JSON.stringify(resp, undefined, 2));
              })
              .catch(function(error) {
                print(error);
              });
        })
        .catch(function(error) {
          print(error);
        });
  } catch (error) {
    print(error.message);
  }
}
