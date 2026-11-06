// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tab capture API test script
// summary: Runs a browser test that starts video-only tab capture via chrome.tabCapture.capture and passes or fails based on the returned stream.
// ---

chrome.test.runTests([
  function startTabCapture() {
    chrome.tabCapture.capture({audio: false, video: true}, function(stream) {
      if (stream) {
        chrome.test.succeed();
      } else {
        chrome.test.fail();
      }
    });
  },
]);
