// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// browser_tests.exe --gtest_filter="TtsApiTest.*"

// ---docerion
// type: test
// title: Browser test asserting remote network speech voices
// summary: Runs the TtsApiTest browser test suite, checking that chrome.tts.getVoices returns at least 19 voices and that all reported voices are remote.
// ---

const pass = chrome.test.callbackPass;

chrome.test.runTests([
  function testNetworkSpeechVoices() {
    chrome.tts.getVoices(pass(function(voices) {
      chrome.test.assertTrue(voices.length >= 19);
      for (let i = 0; i < voices.length; i++) {
        chrome.test.assertEq(true, voices[i].remote);
      }
    }));
  },
]);
