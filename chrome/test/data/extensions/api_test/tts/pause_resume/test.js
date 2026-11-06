// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TTS api test
// browser_tests.exe --gtest_filter="TtsApiTest.*"

// ---docerion
// type: test
// title: Browser tests for pausing and resuming chrome.tts speech
// summary: Runs browser tests that verify chrome.tts pause and resume behavior before and during speech, succeeding on the speech end event.
// ---

chrome.test.runTests([
  function testPauseBeforeSpeak() {
    chrome.tts.pause();
    chrome.tts.speak('test 1', {
      'enqueue': true,
      'onEvent': function(event) {
        if (event.type === 'end') {
          chrome.test.succeed();
        }
      },
    });
    chrome.tts.resume();
  },
  function testPauseDuringSpeak() {
    chrome.tts.speak('test 2', {
      'onEvent': function(event) {
        if (event.type === 'end') {
          chrome.test.succeed();
        }
      },
    });
    chrome.tts.pause();
    chrome.tts.resume();
  },
]);
