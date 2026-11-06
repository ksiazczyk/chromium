// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of the minimum_chrome_version test app v3
// summary: Background script that opens the app window on launch and answers external GET_APP_VERSION messages with the manifest version.
// ---

chrome.app.runtime.onLaunched.addListener(function (_launchData) {
  chrome.app.window.create(
    'index.html',
    { width: 1920, height: 1080 },
    function (_window) { }
  );
});

chrome.runtime.onMessageExternal.addListener(
  function (request, _sender, sendResponse) {
    if (request === 'GET_APP_VERSION')
      sendResponse({ version: chrome.runtime.getManifest().version });
  });
