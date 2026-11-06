// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script saving storage on suspend
// summary: Event page background script that opens index.html on launch and writes a last_save timestamp to chrome.storage.local when the event page is suspended.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('index.html', {});
});

chrome.runtime.onSuspend.addListener(function() {
  var now = new Date();
  chrome.storage.local.set({"last_save": now.toLocaleString()}, function() {
    console.log("Finished writing last_save: " + now.toLocaleString());
  });
});
