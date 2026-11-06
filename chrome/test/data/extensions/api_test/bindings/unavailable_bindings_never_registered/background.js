// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the unavailable bindings test
// summary: Extension API test background script asserting that chrome.alarms and chrome.storage stay unregistered without permissions, and that storage calls throw once the storage permission is removed.
// ---

function assertAlarmsIsNotRegistered() {
  chrome.test.assertFalse('alarms' in chrome, 'alarms is registered');
}

function assertRuntimeIsRegistered() {
  const runtime = chrome.runtime;
  chrome.test.assertTrue(
      !!(runtime && runtime.reload && runtime.connect),
      'runtime is not registered');
}

function assertStorageIsNotRegistered() {
  chrome.test.assertFalse('storage' in chrome, 'storage is registered');
}

function assertStorageIsRegistered() {
  const storage = chrome.storage;
  chrome.test.assertTrue(
      !!(storage && storage.local && storage.local.get),
      'storage is not registered');
}

function test() {
  assertAlarmsIsNotRegistered();
  assertRuntimeIsRegistered();
  assertStorageIsNotRegistered();

  chrome.permissions.request(
      {permissions: ['storage']}, chrome.test.callbackPass(function() {
        assertAlarmsIsNotRegistered();
        assertRuntimeIsRegistered();
        assertStorageIsRegistered();

        chrome.permissions.remove(
            {permissions: ['storage']}, chrome.test.callbackPass(function() {
              assertAlarmsIsNotRegistered();
              assertRuntimeIsRegistered();
              assertStorageIsRegistered();

              // Although storage should throw an error on use since it's
              // Verify `chrome.storage.local.get` throws when storage
              // permission is removed.
              chrome.test.assertThrows(
                  chrome.storage.local.get.bind(
                      chrome.storage.local, function() {}),
                  `'storage.get' is not available in this context.`);

              chrome.test.succeed();
            }));
      }));
}

chrome.test.runTests([test]);
