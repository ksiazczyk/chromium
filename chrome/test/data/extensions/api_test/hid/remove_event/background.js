// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: HID onDeviceRemoved test background script
// summary: Background script for a browser test extension that tracks known HID devices and reports success or failure when the chrome.hid.onDeviceRemoved event fires.
// ---

const known_devices = {};

chrome.hid.onDeviceRemoved.addListener(function(deviceId) {
  if (deviceId in known_devices) {
    chrome.test.sendMessage('success');
  } else {
    console.error('Unexpected device removed: ' + device.deviceId);
    chrome.test.sendMessage('failure');
  }
});

chrome.hid.getDevices({}, function(devices) {
  for (const device of devices) {
    known_devices[device.deviceId] = device;
  }
  chrome.test.sendMessage('loaded');
});
