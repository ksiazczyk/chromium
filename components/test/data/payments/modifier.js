/*
 * Copyright 2017 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: PaymentRequest modifier test
// summary: Invokes PaymentRequest with a modifier containing only the bare minimum required fields.
// ---

/**
 * Invokes the PaymentRequest with a modifier that contains the bare mininum of
 * required fields.
 */
function buy() {
  try {
    new PaymentRequest(
        [{
          supportedMethods: 'foo',
        }],
        {
          total: {
            label: 'Total',
            amount: {
              currency: 'USD',
              value: '5.00',
            },
          },
          modifiers: [{
            supportedMethods: 'foo',
          }],
        })
        .show()
        .then(function(response) {
          response.complete()
              .then(function() {
                print(complete);
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
