/*
 * Copyright 2019 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Payment delegations enabler
// summary: Enables shipping address and payer delegations via the PaymentManager API on the registered KylePay service worker.
// ---

/**
 * Enables the delegations for this payment method.
 * @return {Promise<string>} - Either "success" or an error message.
 */
async function enableDelegations() {
  try {
    const registration =
        await navigator.serviceWorker.getRegistration('app.js');
    await navigator.serviceWorker.ready;
    if (!registration.paymentManager) {
      return 'PaymentManager API not found.';
    }
    if (!registration.paymentManager.enableDelegations) {
      return 'PaymentManager does not support enableDelegations method';
    }
    await registration.paymentManager.enableDelegations(
        ['shippingAddress', 'payerName', 'payerEmail', 'payerPhone']);
    return 'success';
  } catch (e) {
    return e.toString();
  }
}
