// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page test expecting speech recognition denial
// summary: Background page script that starts webkitSpeechRecognition and asserts it fails with a not-allowed error when permission is missing.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.runTests([
    function testWebkitSpeechRecognition() {
      var r = new webkitSpeechRecognition();
      r.onerror = function(e) {  // Expect to fail.
        chrome.test.assertEq('not-allowed', e.error);
        chrome.test.succeed();
      };
      r.onstart = function() {
        chrome.test.fail();
      };
      r.start();
    }
  ]);
});
