// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Event page background script
// summary: Background script that opens the app window on launch and logs the current time when the event page is suspended.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('index.html', {});
});

chrome.runtime.onSuspend.addListener(function() {
  var now = new Date();
  console.log("The current time is: " + now.toLocaleString());
});
