// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TTS api test for Chrome on ChromeOS.
// browser_tests.exe --gtest_filter="TtsApiTest.*"

// ---docerion
// type: test
// title: chrome.tts enqueue browser test
// summary: Browser test that verifies chrome.tts.speak enqueues utterances and fires end events in the expected order.
// ---

chrome.test.runTests([function testEnqueue() {
  let callbacks = 0;
  chrome.tts.speak(
      'text 1', {
        'enqueue': true,
        'onEvent': (event) => {
          chrome.test.assertEq('end', event.type);
          chrome.test.assertEq(2, callbacks);
          callbacks++;
        },
      },
      () => {
        // This happens immediately.
        chrome.test.assertNoLastError();
        chrome.test.assertEq(0, callbacks);
        callbacks++;
      });
  chrome.tts.speak(
      'text 2', {
        'enqueue': true,
        'onEvent': (event) => {
          chrome.test.assertEq('end', event.type);
          chrome.test.assertEq(3, callbacks);
          chrome.test.succeed();
        },
      },
      () => {
        // This happens immediately.
        chrome.test.assertNoLastError();
        chrome.test.assertEq(1, callbacks);
        callbacks++;
      });
}]);
