// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test creating a Mojo message pipe
// summary: Service worker test script that runs a chrome.test case creating and closing a Mojo message pipe to verify Mojo availability in extension service workers.
// ---

chrome.test.runTests([
  function createMojoMessagePipe() {
    const {handle0, handle1} = Mojo.createMessagePipe();
    handle0.close();
    handle1.close();
    chrome.test.succeed();
  },
]);
