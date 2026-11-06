// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for chrome.ttsEngine.updateVoices
// summary: Runs a test that adds onSpeak and onStop listeners and calls chrome.ttsEngine.updateVoices with two dynamic voices to verify the API can be invoked.
// ---

function setup() {
  const speakListener = function(utterance, options, sendTtsEvent) {};
  const stopListener = function() {};
  chrome.ttsEngine.onSpeak.addListener(speakListener);
  chrome.ttsEngine.onStop.addListener(stopListener);
}

chrome.test.runTests([
  function testSetUpDynamicVoices() {
    const testVoiceData = [
      {
        eventTypes: ['start'],
        lang: 'zh-TW',
        remote: false,
        voiceName: 'Dynamic Voice 1',
      },
      {
        eventTypes: ['end', 'interrupted', 'cancelled'],
        lang: 'en-GB',
        remote: false,
        voiceName: 'Dynamic Voice 2',
      },
    ];
    setup();
    chrome.ttsEngine.updateVoices(testVoiceData);
    chrome.test.succeed();
  },
]);
