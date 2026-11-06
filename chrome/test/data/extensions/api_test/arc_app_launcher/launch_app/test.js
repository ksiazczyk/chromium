// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ARC app launcher API browser test
// summary: Browser test that checks chrome.arcAppsPrivate.getLaunchableApps returns the expected package and that launchApp fails for an invalid package name but succeeds for a valid one.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  let expectedPackageName = null;

  chrome.test.runTests([
    function getConfig() {
      chrome.test.getConfig(chrome.test.callbackPass(config => {
        expectedPackageName = config.customArg;
      }));
    },

    function getPackageNameAndLaunchApp() {
      chrome.arcAppsPrivate.launchApp(
          'invalid package name', chrome.test.callbackFail('App not found'));
      chrome.test.assertTrue(!!expectedPackageName);
      chrome.arcAppsPrivate.getLaunchableApps(
          chrome.test.callbackPass(appsInfo => {
            chrome.test.assertEq(
                [{packageName: expectedPackageName}], appsInfo);
            chrome.arcAppsPrivate.launchApp(
                appsInfo[0].packageName, chrome.test.callbackPass());
          }));
    },
  ]);
});
