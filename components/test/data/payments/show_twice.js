/*
 * Copyright 2016 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Show twice PaymentRequest test script
// summary: Test script that shows a second PaymentRequest while one is already showing to verify that the second show fails.
// ---

/**
 * Launches the first PaymentRequest UI.
 */
function showFirst() {
  const request1 = new PaymentRequest(
      [{supportedMethods: 'https://bobpay.test'}, {supportedMethods: 'https://alicepay.test'}],
      {total: {label: 'Total', amount: {currency: 'USD', value: '5.00'}}});
  request1.show();
}

/**
 * Launches the second PaymentRequest UI, which should fail because the first is
 * already showing. Must be called after showFirst().
 */
async function showSecond() {
  const request2 = new PaymentRequest(
      [{supportedMethods: 'https://bobpay.test'}],
      {total: {label: 'Total', amount: {currency: 'USD', value: '5.00'}}});
  // We already have a PaymentRequest showing, so this should fail.
  try {
    await request2.show();
    return 'Unexpected success showing second request';
  } catch (error) {
    return 'Second request: ' + error;
  }
}
