// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Kiosk test app background script
// summary: Handles app launch by reporting kiosk session launch data, keeping the display awake, and opening the app_main.html window.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  if (launchData.isKioskSession)
    chrome.test.sendMessage('launchData.isKioskSession = true');
  if (chrome.power)
    chrome.power.requestKeepAwake('display');
  else
    chrome.experimental.power.requestKeepAwake(function() {});

  chrome.app.window.create('app_main.html',
      { 'width': 1920,
        'height': 1080 },
      function(window) {});
});
