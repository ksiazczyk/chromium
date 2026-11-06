// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// proxy api test
// browser_tests.exe --gtest_filter=ProxySettingsApiTest.ProxyAutoSettings

// ---docerion
// type: test
// title: Browser test for chrome.proxy auto-detect settings
// summary: Sets proxy settings to auto_detect mode and verifies the stored value and level of control in both regular and incognito contexts.
// ---

function expect(expected, message) {
  return chrome.test.callbackPass(function(value) {
    chrome.test.assertEq(expected, value, message);
  });
}

const CONFIG = {
  mode: 'auto_detect',
};

chrome.test.runTests([
  // Verify that execution has started to make sure flaky timeouts are not
  // caused by us.
  function verifyTestsHaveStarted() {
    chrome.test.succeed();
  },
  function setAutoSettings() {
    chrome.proxy.settings.set({value: CONFIG}, chrome.test.callbackPass());
  },
  function verifyRegular() {
    chrome.proxy.settings.get(
        {incognito: false},
        expect(
            {value: CONFIG, levelOfControl: 'controlled_by_this_extension'},
            'invalid proxy settings'));
  },
  function verifyIncognito() {
    chrome.proxy.settings.get(
        {incognito: true},
        expect(
            {
              value: CONFIG,
              incognitoSpecific: false,
              levelOfControl: 'controlled_by_this_extension',
            },
            'invalid proxy settings'));
  },
]);
