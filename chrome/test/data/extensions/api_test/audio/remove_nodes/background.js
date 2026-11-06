// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Audio remove_nodes test background script
// summary: Background script for the chrome.audio OnNodesChanged extension browser test that listens for onDeviceListChanged and asserts the expected Jabra Mic device list.
// ---

chrome.test.runTests([
  function waitForDeviceChangedEventTests() {
    chrome.test.listenOnce(chrome.audio.onDeviceListChanged, function(devices) {
      const deviceList =
          devices
              .map(function(device) {
                return {
                  id: device.id,
                  stableDeviceId: device.stableDeviceId,
                  streamType: device.streamType,
                  deviceType: device.deviceType,
                  deviceName: device.deviceName,
                  displayName: device.displayName,
                };
              })
              .sort(function(lhs, rhs) {
                return Number.parseInt(lhs.id) - Number.parseInt(rhs.id);
              });

      chrome.test.assertEq(
          [
            {
              id: '40001',
              stableDeviceId: '0',
              streamType: 'INPUT',
              deviceType: 'USB',
              deviceName: 'Jabra Mic',
              displayName: 'Jabra Mic 1',
            },
            {
              id: '40002',
              stableDeviceId: '1',
              streamType: 'INPUT',
              deviceType: 'USB',
              deviceName: 'Jabra Mic',
              displayName: 'Jabra Mic 2',
            },
          ],
          deviceList);
    });
  },
]);

chrome.test.sendMessage('loaded');
