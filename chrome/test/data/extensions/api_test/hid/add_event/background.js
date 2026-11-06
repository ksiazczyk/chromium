// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: HID add_event test background script
// summary: Background script for the chrome.hid.onDeviceAdded browser test that checks the added device's vendor and product IDs and reports success or failure via chrome.test.sendMessage.
// ---

chrome.hid.onDeviceAdded.addListener(function(device) {
  if (device.vendorId === 6353 && device.productId === 22768) {
    chrome.test.sendMessage('success');
  } else {
    console.error(
        'Got unexpected device: vid:' + device.vendorId +
        ' pid:' + device.productId);
    chrome.test.sendMessage('failure');
  }
});
chrome.test.sendMessage('loaded');
