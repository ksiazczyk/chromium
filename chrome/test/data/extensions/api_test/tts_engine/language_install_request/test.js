// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Sends a message when InstallLanguageRequest event is received. The
// tts_extension_apitest.cc test verifies the params were sent successfully

// ---docerion
// type: test
// title: Test listener for onInstallLanguageRequest events
// summary: Background script that listens for chrome.ttsEngine onInstallLanguageRequest events and reports the language and requestor details to the tts_extension_apitest harness.
// ---

chrome.test.runTests([function testOnInstallLanguageRequestEventEmitted() {
  const listener = (requestor, lang) => {
    chrome.test.sendMessage(`lang:${lang}`);
    chrome.test.sendMessage(
        `requestor.id:${requestor.id}, requestor.source:${requestor.source}`);
  };

  chrome.ttsEngine.onInstallLanguageRequest.addListener(listener);
}]);
