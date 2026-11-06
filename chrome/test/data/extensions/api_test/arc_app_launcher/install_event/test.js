// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ARC app install event API test
// summary: Browser test that reads the expected package name from the test config, listens for arcAppsPrivate.onInstalled, and launches the installed ARC app.
// ---

let expectedPackageName = null;

chrome.test.runTests([
  function getConfig() {
    chrome.test.getConfig(chrome.test.callbackPass(config => {
      expectedPackageName = config.customArg;
    }));
  },

  function onInstalled() {
    chrome.test.assertTrue(!!expectedPackageName);
    chrome.test.listenOnce(chrome.arcAppsPrivate.onInstalled, appInfo => {
      chrome.test.assertEq({packageName: expectedPackageName}, appInfo);
      chrome.arcAppsPrivate.launchApp(
          appInfo.packageName, chrome.test.callbackPass());
    });
    chrome.test.sendMessage('ready');
  },
]);
