// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Packaged app test background script
// summary: Background script that signals app launch and opens main.html in a 600x600 window for the developer API test.
// ---

chrome.test.sendMessage('app_launched');

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {
    width: 600,
    height: 600,
  });
});
