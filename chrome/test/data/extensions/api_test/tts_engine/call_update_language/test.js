// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test calling chrome.ttsEngine.updateLanguage
// summary: Runs a browser test that invokes chrome.ttsEngine.updateLanguage with a French installing status and asserts the test succeeds.
// ---

chrome.test.runTests([function testUpdateLanguageApi() {
  const status = {lang: 'fr', installStatus: 'installing'};
  chrome.ttsEngine.updateLanguage(status);
  chrome.test.succeed();
}]);
