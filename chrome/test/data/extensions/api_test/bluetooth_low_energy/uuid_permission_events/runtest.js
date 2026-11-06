// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script for bluetoothLowEnergy UUID permission events
// summary: Background script that registers bluetoothLowEnergy event listeners expected not to fire and signals test readiness to the browser test harness.
// ---

function listener(data) {
  chrome.test.sendMessage('Event should not have been received.');
}

chrome.bluetoothLowEnergy.onServiceChanged.addListener(listener);
chrome.bluetoothLowEnergy.onCharacteristicValueChanged.addListener(listener);
chrome.bluetoothLowEnergy.onDescriptorValueChanged.addListener(listener);

chrome.test.sendMessage('ready', function(message) {
  chrome.test.succeed();
});
