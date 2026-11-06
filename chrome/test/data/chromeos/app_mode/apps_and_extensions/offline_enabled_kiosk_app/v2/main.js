// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test kiosk app background script
// summary: Background script that handles the kiosk app launch, reports the kiosk session via a test message, keeps the display awake, and opens the main page.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  if (launchData.isKioskSession)
    chrome.test.sendMessage('launchData.isKioskSession = true');
  if (chrome.power)
    chrome.power.requestKeepAwake('display');
  else
    chrome.experimental.power.requestKeepAwake(function() {});

  chrome.app.window.create('app_main.html',
      { 'width': 1920, 'height': 1080 });
});
