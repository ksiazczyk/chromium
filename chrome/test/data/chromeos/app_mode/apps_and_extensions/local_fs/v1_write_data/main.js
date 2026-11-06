// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Kiosk app background launch script
// summary: Background script that signals a kiosk session on launch and opens the app_main.html window.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  if (launchData.isKioskSession)
    chrome.test.sendMessage('launchData.isKioskSession = true');

  chrome.app.window.create('app_main.html', {});
});
