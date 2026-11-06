// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: USB listInterfaces API test
// summary: JavaScript test that finds a USB device by vendor and product ID, calls chrome.usb.listInterfaces, asserts no error, and closes the device.
// ---

const usb = chrome.usb;

const tests = [
  function listInterfaces() {
    usb.findDevices({vendorId: 0, productId: 0}, function(devices) {
      const device = devices[0];
      usb.listInterfaces(device, function(result) {
        chrome.test.assertNoLastError();
        usb.closeDevice(device);
        chrome.test.succeed();
      });
    });
  },
];

chrome.test.runTests(tests);
