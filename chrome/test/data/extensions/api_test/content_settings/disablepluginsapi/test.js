// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Plugins content settings API test script
// summary: Background test script that sets the plugins content setting for a pattern via chrome.contentSettings and asserts the call succeeds without errors.
// ---

const cs = chrome.contentSettings;

function setPluginsSetting() {
  cs['plugins'].set(
      {
        primaryPattern: 'https://www.example.com/*',
        secondaryPattern: '<all_urls>',
        setting: 'allow',
      },
      () => {
        chrome.test.assertNoLastError();
        chrome.test.succeed();
      });
}
