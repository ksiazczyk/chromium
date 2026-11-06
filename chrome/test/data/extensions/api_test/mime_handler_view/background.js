// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MIME handler background page test script
// summary: Background page script that listens for runtime suspend events to support the MIME handler background page test.
// ---

let testComplete = false;

function startBackgroundPageTest(onSuspend) {
  chrome.runtime.onSuspend.addListener(() => {
    if (!testComplete) {
      onSuspend();
    }
  });
}

function endBackgroundPageTest() {
  testComplete = true;
}
