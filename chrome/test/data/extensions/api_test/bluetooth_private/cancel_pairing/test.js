// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cancel pairing test for chrome.bluetoothPrivate.onPairing
// summary: Browser test that listens for a requestAuthorization pairing event and responds with cancel via chrome.bluetoothPrivate.setPairingResponse, expecting success.
// ---

function testCancelPairing() {
  chrome.bluetoothPrivate.onPairing.addListener(function(pairingEvent) {
    chrome.test.assertEq('requestAuthorization', pairingEvent.pairing);
    chrome.bluetoothPrivate.setPairingResponse(
        {
          device: pairingEvent.device,
          response: 'cancel',
        },
        function() {
          chrome.test.assertNoLastError();
          chrome.test.succeed();
        });
  });
}

chrome.test.runTests([testCancelPairing]);
