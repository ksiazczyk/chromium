// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bluetooth Low Energy createService API test script
// summary: Test script that calls chrome.bluetoothLowEnergy.createService with a primary service UUID and fails or succeeds based on the result and runtime errors.
// ---

function failOnError(result) {
  if (chrome.runtime.lastError || !result) {
    chrome.test.fail(chrome.runtime.lastError.message);
    return true;
  }
  return false;
}

const service = {
  uuid: '00001234-0000-1000-8000-00805f9b34fb',
  isPrimary: true,
};
chrome.bluetoothLowEnergy.createService(service, function(result) {
  if (failOnError(result)) {
    return;
  }
  chrome.test.succeed();
});
