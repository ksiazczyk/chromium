// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Speech recognition start test script
// summary: Service worker test that calls chrome.speechRecognitionPrivate.start() and asserts the returned recognition type is on-device or network and matches the expected type passed via customArg.
// ---

(async function() {
  const onDevice =
      chrome.speechRecognitionPrivate.SpeechRecognitionType.ON_DEVICE;
  const network = chrome.speechRecognitionPrivate.SpeechRecognitionType.NETWORK;
  const config = await chrome.test.getConfig();
  const expectedRecognitionType = config.customArg;
  const actualRecognitionType = await chrome.speechRecognitionPrivate.start({});
  chrome.test.assertTrue(
      actualRecognitionType === onDevice || actualRecognitionType === network);
  chrome.test.assertEq(expectedRecognitionType, actualRecognitionType);
  chrome.test.succeed();
})();
