// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Pincode pairing test for the bluetoothPrivate API
// summary: Test that listens for a requestPincode pairing event and responds by confirming with a pincode via chrome.bluetoothPrivate.setPairingResponse.
// ---

function testPincodePairing() {
  chrome.bluetoothPrivate.onPairing.addListener(function(pairingEvent) {
    chrome.test.assertEq('requestPincode', pairingEvent.pairing);
    chrome.bluetoothPrivate.setPairingResponse(
        {
          device: pairingEvent.device,
          response: 'confirm',
          pincode: 'abbbbbbk',
        },
        function() {
          chrome.test.assertNoLastError();
          chrome.test.succeed();
        });
  });
}

chrome.test.runTests([testPincodePairing]);
