// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background test for chrome.fileSystem.requestFileSystem
// summary: Runs a browser test that opens the test app window and requests a read-only testing volume via chrome.fileSystem.requestFileSystem, then verifies the returned entry.
// ---

chrome.test.runTests([
  function withForeground() {
    chrome.app.window.create(
        'test.html', {}, chrome.test.callbackPass(function(appWindow) {
          chrome.fileSystem.requestFileSystem(
              {volumeId: 'testing:read-only'},
              chrome.test.callbackPass(function(fileSystem) {
                chrome.test.assertFalse(!!chrome.runtime.lastError);
                chrome.test.assertTrue(!!fileSystem);
                fileSystem.root.getFile(
                    'open_existing.txt', {},
                    chrome.test.callbackPass(function(entry) {
                      checkEntry(entry, 'open_existing.txt', false, false);
                    }),
                    function(err) {
                      console.info(err.message);
                    });
              }));
        }));
  },
]);
