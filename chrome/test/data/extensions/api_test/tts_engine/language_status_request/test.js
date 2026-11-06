// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test for chrome.ttsEngine onLanguageStatusRequest event
// summary: Browser test script that listens for the ttsEngine onLanguageStatusRequest event and sends messages with the requested language and requestor details for verification by tts_extension_apitest.cc.
// ---

// Sends a message when LanguageStatusRequest event is received. The
// tts_extension_apitest.cc test verifies the params were sent successfully.
chrome.test.runTests([function testOnLanguageStatusRequestEventEmitted() {
  const listener = (requestor, lang) => {
    chrome.test.sendMessage(`lang:${lang}`);
    chrome.test.sendMessage(
        `requestor.id:${requestor.id}, requestor.source:${requestor.source}`);
  };

  chrome.ttsEngine.onLanguageStatusRequest.addListener(listener);
}]);
