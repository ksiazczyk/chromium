// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: AppView host app background page
// summary: Background page script that opens the host app window on launch and signals the AppView test that the host app is running.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html', {}, function() {
    console.log('Host App is running.');
    chrome.test.sendMessage('AppViewTest.LAUNCHED');
  });
});

