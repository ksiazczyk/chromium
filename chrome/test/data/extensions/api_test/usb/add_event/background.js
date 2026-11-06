// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: USB onDeviceAdded test background script
// summary: Background script for the chrome.usb.onDeviceAdded browser test that reports success when the expected emulated USB device is added.
// ---

chrome.usb.onDeviceAdded.addListener(function(device) {
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
