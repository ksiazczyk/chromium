// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bluetooth Socket Permission Denied Test Script
// summary: Test script that asserts chrome.bluetoothSocket.create fails with a 'Permission denied' error when the permission is missing.
// ---

chrome.bluetoothSocket.create(function(socket) {
  if (!chrome.runtime.lastError) {
    chrome.test.fail('Expected an error');
  }
  chrome.test.assertEq('Permission denied', chrome.runtime.lastError.message);
  chrome.test.succeed();
});
