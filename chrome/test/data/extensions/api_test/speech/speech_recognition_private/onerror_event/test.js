// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for the speechRecognitionPrivate onError event
// summary: JavaScript browser test that listens for a fake speech recognition error dispatched from C++ and asserts the event has no clientId and carries the expected fatal error message.
// ---

chrome.test.runTests([function testOnError() {
  chrome.speechRecognitionPrivate.onError.addListener((event) => {
    // The event should not have a clientId attached to it because the provided
    // key is the extension ID only (no client ID is provided).
    // See SpeechRecognitionPrivateManagerTest.DispatchOnErrorEvent for more
    // details.
    chrome.test.assertEq(undefined, event.clientId);
    chrome.test.assertEq('A fatal error', event.message);
    chrome.test.succeed();
  });

  // Triggers a fake speech recognition error from C++.
  chrome.test.sendMessage('Proceed');
}]);
