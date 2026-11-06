// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launch on install test background script
// summary: Background service worker for the launch-on-install API test that launches installed apps and reports when the Chrome app deprecation error appears.
// ---

const kChromeAppErrorPrefix = 'Chrome app';
const kChromeAppErrorSuffix = 'is deprecated on Window, Mac, and Linux. ' +
    'See https://support.google.com/chrome/?p=chrome_app_deprecation for more ' +
    'info';

chrome.management.onInstalled.addListener(function(extensionInfo) {
  if (!extensionInfo.isApp) {
    console.info(`Can't launch ${extensionInfo.name} (${
        extensionInfo.id}): Not an app.`);
    return;
  }
  console.info(`Launch ${extensionInfo.name} (${extensionInfo.id})`);

  chrome.management.launchApp(extensionInfo.id, function() {
    const lastError = chrome.runtime.lastError;
    if (lastError && lastError.message.startsWith(kChromeAppErrorPrefix) &&
        lastError.message.endsWith(kChromeAppErrorSuffix)) {
      chrome.test.sendMessage('got_chrome_apps_error');
    }
  });
});

chrome.test.sendMessage('launcher loaded');
