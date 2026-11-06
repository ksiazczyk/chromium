// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onStop event browser test
// summary: Service worker test that listens for the chrome.speechRecognitionPrivate.onStop event, verifies the expected client ID and reports the outcome via chrome.test messages.
// ---

chrome.test.runTests([function testOnStop() {
  // The extension's client ID.
  const clientId = 4;
  chrome.speechRecognitionPrivate.onStop.addListener((event) => {
    if (event.clientId !== clientId) {
      chrome.test.sendMessage('Skipping event');
      return;
    }

    chrome.test.assertNoLastError();
    chrome.test.sendMessage('Processing event');
  });
  chrome.test.succeed();
}]);
