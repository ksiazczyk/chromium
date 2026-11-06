// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page tests for chrome.fileSystem.requestFileSystem
// summary: Runs browser tests verifying that requesting a file system from a background page fails without a visible app window and succeeds when one is open.
// ---

chrome.test.runTests([
  function withoutForeground() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackFail(
            'Impossible to ask for user consent as ' +
                'there is no app window visible.',
            function(fs) {}));
  },
  function withForeground() {
    chrome.app.window.create(
        'test.html', {}, chrome.test.callbackPass(function(appWindow) {
          chrome.fileSystem.requestFileSystem(
              {volumeId: 'testing:read-only'},
              chrome.test.callbackPass(function(fileSystem) {
                chrome.test.assertFalse(!!chrome.runtime.lastError);
                chrome.test.assertTrue(!!fileSystem);
              }));
        }));
  },
]);
