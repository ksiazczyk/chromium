// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TTS api test for Chrome on ChromeOS.
// browser_tests.exe --gtest_filter="TtsApiTest.*"

// ---docerion
// type: test
// title: Browser test that interrupting speech ends the first utterance
// summary: Runs a chrome.test browser test asserting that a second chrome.tts.speak call with enqueue false interrupts the first utterance and fires the expected interrupted and end events.
// ---

chrome.test.runTests([
  function testInterrupt() {
    let callbacks = 0;
    chrome.tts.speak(
        'text 1', {
          'enqueue': false,
          'onEvent': function(event) {
            chrome.test.assertEq('interrupted', event.type);
            callbacks++;
          },
        },
        function() {
          chrome.test.assertNoLastError();
          callbacks++;
        });
    chrome.tts.speak(
        'text 2', {
          'enqueue': false,
          'onEvent': function(event) {
            chrome.test.assertEq('end', event.type);
            callbacks++;
            if (callbacks === 4) {
              chrome.test.succeed();
            } else {
              chrome.test.fail();
            }
          },
        },
        function() {
          chrome.test.assertNoLastError();
          callbacks++;
        });
  },
]);
