// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test kiosk app launch script
// summary: Background script of the test kiosk app that reports kiosk session launch data and opens app_main.html when the app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  if (launchData.isKioskSession)
    chrome.test.sendMessage('launchData.isKioskSession = true');

  chrome.app.window.create('app_main.html', {});
});
