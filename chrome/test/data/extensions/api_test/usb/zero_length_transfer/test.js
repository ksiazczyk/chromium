// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: USB zero-length bulk transfer test
// summary: Extension API test that finds a USB device and performs a zero-length outbound bulk transfer, expecting the callback to succeed.
// ---

const usb = chrome.usb;

const tests = [
  function zeroLengthTransfer() {
    usb.findDevices({vendorId: 0, productId: 0}, function(devices) {
      const device = devices[0];
      const transfer = new Object();
      transfer.direction = 'out';
      transfer.endpoint = 1;
      transfer.data = new ArrayBuffer(0);
      usb.bulkTransfer(device, transfer, function(result) {
        chrome.test.succeed();
      });
    });
  },
];

chrome.test.runTests(tests);
