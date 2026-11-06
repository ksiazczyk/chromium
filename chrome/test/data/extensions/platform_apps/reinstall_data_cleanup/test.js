// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Storage cleanup test script for app reinstall
// summary: Background script that checks chrome.storage.local and chrome.storage.sync contain no leftover values after reinstall, then writes and reads back a value.
// ---

function testChromeStorage(backend, callback) {
  backend.get('foo', chrome.test.callbackPass(function(result) {
    chrome.test.assertEq(undefined, result.foo,
                         'no value should have been found');
    chrome.test.assertEq(undefined, chrome.runtime.lastError);

    // We set the value but also want to make sure it is correctly saved.
    backend.set({ 'foo': 'bar' }, chrome.test.callbackPass(function() {
      backend.get('foo', chrome.test.callbackPass(function(result) {
        chrome.test.assertEq('bar', result.foo, 'value should be written');
      }));
    }));
  }));
}

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.sendMessage('Launched', function() {
    chrome.test.runTests([
      function testChromeStorageLocal() {
        testChromeStorage(chrome.storage.local);
      },
      function testChromeStorageSync() {
        testChromeStorage(chrome.storage.sync);
      }
    ]);
  });
});
