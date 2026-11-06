// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Native messaging launch unsupported test
// summary: Browser test that connects to a native messaging host and asserts the port disconnects with an access-forbidden error.
// ---

const APP_NAME = 'com.google.chrome.test.echo';

chrome.runtime.onConnectNative.addListener(port => {
  chrome.test.runTests([
    function test() {
      chrome.test.assertEq(port.sender.nativeApplication, APP_NAME);
      port.onDisconnect.addListener(chrome.test.callback(
          function() {},
          'Access to the specified native messaging host is forbidden.'));
    },
  ]);
});
