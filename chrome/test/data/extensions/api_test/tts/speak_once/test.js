// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// browser_tests.exe --gtest_filter="TtsApiTest.*"

// ---docerion
// type: test
// title: chrome.tts speak once browser test
// summary: Browser test that speaks 'hello world' via chrome.tts and asserts the resulting end event has charIndex 11.
// ---

chrome.test.runTests([
  function testSpeakOnce() {
    function eventListener(event) {
      chrome.test.assertEq('end', event.type);
      chrome.test.assertEq(11, event.charIndex);
      chrome.test.succeed();
    }
    chrome.tts.speak('hello world', {'onEvent': eventListener}, function() {
      chrome.test.assertNoLastError();
    });
  },
]);
