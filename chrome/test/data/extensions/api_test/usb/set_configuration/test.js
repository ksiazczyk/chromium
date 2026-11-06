// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.usb setConfiguration API test
// summary: Browser test that finds a USB device, checks it is unconfigured, calls setConfiguration, and verifies the configuration is applied without errors.
// ---

const usb = chrome.usb;

const tests = [
  function setConfiguration() {
    usb.findDevices({vendorId: 0, productId: 0}, function(devices) {
      const device = devices[0];
      usb.getConfiguration(device, function(result) {
        chrome.test.assertLastError('The device is not in a configured state.');
        usb.setConfiguration(device, 1, function() {
          chrome.test.assertNoLastError();
          usb.getConfiguration(device, function(result) {
            chrome.test.assertNoLastError();
            usb.closeDevice(device);
            chrome.test.succeed();
          });
        });
      });
    });
  },
];

chrome.test.runTests(tests);
