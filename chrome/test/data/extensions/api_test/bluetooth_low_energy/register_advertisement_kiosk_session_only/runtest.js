// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BLE registerAdvertisement kiosk permission test
// summary: Registers a Bluetooth Low Energy broadcast advertisement and asserts registration fails with Permission denied when the kiosk app is not autolaunched.
// ---

const advertisement = {
  type: 'broadcast',
  serviceUuids: ['1234'],
};

chrome.bluetoothLowEnergy.registerAdvertisement(advertisement, function() {
  if (chrome.runtime.lastError) {
    chrome.test.assertEq(chrome.runtime.lastError.message, 'Permission denied');
    chrome.test.succeed();
    return;
  }
  chrome.test.fail('Should not work in kiosk unless app was autolaunched');
});
