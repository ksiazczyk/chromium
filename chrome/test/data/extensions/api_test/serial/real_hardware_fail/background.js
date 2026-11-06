// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Serial getDevices failure test background script
// summary: Runs chrome.serial.getDevices and asserts the returned device list is empty, as the test case for the real hardware failure extension API test.
// ---

const testGetDevices = function() {
  const onGetDevices = function(devices) {
    chrome.test.assertTrue(devices.length === 0);
    chrome.test.succeed();
  };

  chrome.serial.getDevices(onGetDevices);
};

const tests = [testGetDevices];
chrome.test.runTests(tests);
