// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// system.memory api test
// browser_tests --gtest_filter="SystemMemoryApiTest.*"

// ---docerion
// type: test
// title: system.memory API browser test
// summary: Browser test that repeatedly calls chrome.system.memory.getInfo and asserts capacity of 4096 and availableCapacity of 1024.
// ---

chrome.test.runTests([
  function testGet() {
    for (let i = 0; i < 10; ++i) {
      chrome.system.memory.getInfo(chrome.test.callbackPass(function(result) {
        chrome.test.assertEq(4096, result.capacity);
        chrome.test.assertEq(1024, result.availableCapacity);
      }));
    }
  },
]);
