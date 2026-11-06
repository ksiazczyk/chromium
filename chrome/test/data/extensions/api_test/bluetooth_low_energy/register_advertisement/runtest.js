// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test registering and unregistering a Bluetooth LE advertisement
// summary: Registers a broadcast advertisement with service, manufacturer, and service data via chrome.bluetoothLowEnergy, then unregisters it and reports test success or failure.
// ---

const registerAdvertisement = chrome.bluetoothLowEnergy.registerAdvertisement;
const unregisterAdvertisement =
    chrome.bluetoothLowEnergy.unregisterAdvertisement;

const serviceUuidsValue = ['value1', 'value2'];
const manufacturerDataValue =
    [{id: 321, data: [1, 2, 3]}, {id: 567, data: [8, 2, 3]}];
const solicitUuidsValue = ['value3', 'value4'];
const serviceDataValue =
    [{uuid: 'uuid8', data: [1, 2, 3]}, {uuid: 'uuid36', data: [8, 2, 3]}];

const advertisement = {
  type: 'broadcast',
  serviceUuids: serviceUuidsValue,
  manufacturerData: manufacturerDataValue,
  solicitUuids: solicitUuidsValue,
  serviceData: serviceDataValue,
};

registerAdvertisement(advertisement, function(advertisementId) {
  if (chrome.runtime.lastError || !advertisementId) {
    chrome.test.fail(chrome.runtime.lastError.message);
    return;
  }

  unregisterAdvertisement(advertisementId, function() {
    if (chrome.runtime.lastError) {
      chrome.test.fail(chrome.runtime.lastError.message);
      return;
    }
    chrome.test.succeed();
  });
});
