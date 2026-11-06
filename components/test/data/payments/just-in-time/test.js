/*
 * Copyright 2021 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Just-in-time payment test helpers
// summary: JavaScript helpers that register the payment service worker and request a dummy $0.01 payment to trigger just-in-time installation of the payment handler.
// ---

const supportedMethods = window.location.origin + '/just-in-time/pay.json';
const serviceWorkerFileName = 'sw.js';

/**
 * Installs the service worker for the payment handler, but does not make it a
 * payment handler, i.e., does not register instruments with the payment manger
 * of the service worker.
 * @return {Promise<String>} - A promise that resolves with a string that is
 * either "success" or an error message.
 */
async function installOnlyServiceWorker() {
  try {
    await navigator.serviceWorker.register(serviceWorkerFileName);
    return 'success';
  } catch (error) {
    return error.toString();
  }
}

/**
 * Requests a dummy payment of $0.01 via a payment method that supports just in
 * time installation. This call will install the payment handler just in time in
 * those cases where the payment handler has not yet been installed.
 * @return {Promise<String>} - A promise that resolves with a string that is
 * either "success" or an error message.
 */
async function installPaymentHandlerJustInTime() {
  try {
    const request = new PaymentRequest(
        [{supportedMethods}],
        {total: {label: 'Total', amount: {currency: 'USD', value: '0.01'}}});
    const response = await request.show();
    await response.complete();
    return response.details.status;
  } catch (error) {
    return error.toString();
  }
}
