// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// extension api test
// browser_tests.exe --gtest_filter=ExtensionModuleApiTest.CognitoFile

// ---docerion
// type: test
// title: Browser test for chrome.extension API cognito mode
// summary: Runs chrome.test cases that verify the setUpdateUrlData data length limit and the incognito and file scheme access permissions of the chrome.extension API.
// ---

chrome.test.runTests([
  function testUpdateUrlData() {
    // Data string must not be too long.
    try {
      const data = '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 100
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 200
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 300
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 400
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 500
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 600
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 700
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 800
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 900
          '01234567890123456789012345678901234567890123456789' +
          '01234567890123456789012345678901234567890123456789' +  // 1000
          '01234567890123456789012345678901234567890123456789';
      chrome.extension.setUpdateUrlData(data);
      // Should not reach this line since the above call throws.
      chrome.test.fail();
    } catch (ex) {
    }

    chrome.extension.setUpdateUrlData('a=1&b=2&foo');
    chrome.test.succeed();
  },
  function testPermissions() {
    chrome.extension.isAllowedIncognitoAccess(
        chrome.test.callbackPass(function(hasAccess) {
          chrome.test.assertFalse(hasAccess);
        }));
    chrome.extension.isAllowedFileSchemeAccess(
        chrome.test.callbackPass(function(hasAccess) {
          chrome.test.assertTrue(hasAccess);
        }));
  },
]);
