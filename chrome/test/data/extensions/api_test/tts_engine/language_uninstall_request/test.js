// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test listener for onUninstallLanguageRequest events
// summary: Registers a ttsEngine listener that reports the language, requestor, and uninstall options via test messages for verification by tts_extension_apitest.cc.
// ---

// Sends a message when UninstallLanguageRequest event is received. The
// tts_extension_apitest.cc test verifies the params were sent successfully
chrome.test.runTests([function testOnUninstallLanguageRequestEventEmitted() {
  const listener = (requestor, lang, uninstallOptions) => {
    chrome.test.sendMessage(`lang:${lang}`);
    chrome.test.sendMessage(
        `requestor.id:${requestor.id}, requestor.source:${requestor.source}`);
    chrome.test.sendMessage(
        `uninstallImmediately:${uninstallOptions.uninstallImmediately}`);
  };

  chrome.ttsEngine.onUninstallLanguageRequest.addListener(listener);
}]);
