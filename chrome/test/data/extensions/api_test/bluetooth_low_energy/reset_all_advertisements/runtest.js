// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test for the Bluetooth Low Energy resetAdvertising API
// summary: Registers two Bluetooth Low Energy advertisements, resets all advertisements, and verifies the registered ones can no longer be unregistered.
// ---

const kAdvertisement = {
  type: 'broadcast',
  serviceUuids: ['value1', 'value2'],
  manufacturerData: [
    {id: 321, data: [1, 2, 3]},
    {id: 567, data: [8, 2, 3]},
  ],
  solicitUuids: ['value3', 'value4'],
  serviceData: [
    {uuid: 'uuid8', data: [1, 2, 3]},
    {uuid: 'uuid36', data: [8, 2, 3]},
  ],
};

const registeredAdvertisements = [];

chrome.test.runTests([
  function registerFirstAdvertisement() {
    chrome.bluetoothLowEnergy.registerAdvertisement(
        kAdvertisement, chrome.test.callbackPass(function(id) {
          chrome.test.assertTrue(!!id);
          registeredAdvertisements.push(id);
        }));
  },

  function registerSecondAdvertisement() {
    chrome.bluetoothLowEnergy.registerAdvertisement(
        kAdvertisement, chrome.test.callbackPass(function(id) {
          chrome.test.assertTrue(!!id);
          chrome.test.assertEq(-1, registeredAdvertisements.indexOf(id));
          registeredAdvertisements.push(id);
        }));
  },

  function resetAdvertising() {
    chrome.bluetoothLowEnergy.resetAdvertising(chrome.test.callbackPass());
  },

  function unregisterFails() {
    registeredAdvertisements.forEach(function(id) {
      chrome.bluetoothLowEnergy.unregisterAdvertisement(
          id, chrome.test.callbackFail('This advertisement does not exist'));
    });
  },
]);
