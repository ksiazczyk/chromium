// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Passkey pairing API test
// summary: Runs a chrome.test case that listens for a requestPasskey pairing event and responds via chrome.bluetoothPrivate.setPairingResponse with passkey 900531.
// ---

function testPasskeyPairing() {
  chrome.bluetoothPrivate.onPairing.addListener(function(pairingEvent) {
    chrome.test.assertEq('requestPasskey', pairingEvent.pairing);
    chrome.bluetoothPrivate.setPairingResponse(
        {
          device: pairingEvent.device,
          response: 'confirm',
          passkey: 900531,
        },
        function() {
          chrome.test.assertNoLastError();
          chrome.test.succeed();
        });
  });
}

chrome.test.runTests([testPasskeyPairing]);
