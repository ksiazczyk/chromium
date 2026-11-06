// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TTS api test for Chrome.
// browser_tests.exe --gtest_filter="TtsApiTest.*"

// ---docerion
// type: test
// title: Browser test for chrome.tts pause with non-enqueued speak
// summary: Runs a chrome.test case verifying that pausing speech and speaking again without enqueueing cancels the first utterance.
// ---

chrome.test.runTests([function testPauseCancel() {
  let gotSecondSpeak = false;
  chrome.tts.pause();
  chrome.tts.speak('text 1', {
    'enqueue': true,
    'onEvent': event => {
      if (event.type === 'cancelled' && gotSecondSpeak) {
        chrome.test.succeed();
      }
    },
  });
  chrome.tts.speak('text 2', {'enqueue': false}, function() {
    chrome.test.assertNoLastError();
    gotSecondSpeak = true;
  });
  chrome.tts.resume();
}]);
