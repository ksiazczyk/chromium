// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that setAdapterState fails without an adapter
// summary: Runs a test asserting that bluetoothPrivate.setAdapterState reports a 'Failed to find a Bluetooth adapter' error when no adapter exists.
// ---

function testSetAdapterStateFails() {
  const newState = {
    name: 'Dome',
    powered: true,
    discoverable: true,
  };

  chrome.bluetoothPrivate.setAdapterState(newState, function() {
    chrome.test.assertLastError('Failed to find a Bluetooth adapter');
    chrome.test.succeed();
  });
}

chrome.test.runTests([testSetAdapterStateFails]);
