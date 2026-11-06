// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script for unresponsive onConfigureRequested
// summary: Registers a delayed configure-request handler and runs test cases verifying abort notifications and window behavior when the app is unresponsive.
// ---

'use strict';

let testUtil;

/**
 * Handles a configuration request and simulates a delayed success. Note, that
 * it should timeout, as the timeout for this test is set to 0 ms.
 */
function onConfigureRequested(options, onSuccess, onError) {
  setTimeout(onSuccess, 100);
}

/**
 * Sets up the tests. Called once per all test cases. In case of a failure,
 * the callback is not called.
 *
 * @param {function()} callback Success callback.
 */
function setUp(callback) {
  testUtil.mountFileSystem(callback);
  chrome.fileSystemProvider.onConfigureRequested.addListener(
      onConfigureRequested);
}

/**
 * Runs all of the test cases, one by one.
 */
function runTests() {
  chrome.test.runTests([
    // Verify that if no window is opened, then the request will let users abort
    // the operation via notification.
    function unresponsiveWithoutUI() {
      chrome.fileManagerPrivate.configureVolume(
          testUtil.volumeId,
          chrome.test.callbackFail(
              'Failed to complete configuration.', function() {}));
    },

    // Verify that if a window is opened, then the request will not invoke
    // a notification.
    function unresponsiveWindow() {
      chrome.app.window.create(
          'stub.html', {}, chrome.test.callbackPass(function(appWindow) {
            chrome.fileManagerPrivate.configureVolume(
                testUtil.volumeId, chrome.test.callbackPass(function() {}));
          }));
    },

  ]);
}

// This works-around that background scripts can't import because they aren't
// considered modules.
(async () => {
  testUtil = await import(
      '/_test_resources/api_test/file_system_provider/test_util.js');

  // Setup and run all of the test cases.
  setUp(runTests);
})();
