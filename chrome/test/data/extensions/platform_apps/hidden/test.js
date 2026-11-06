// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script that creates a hidden app window
// summary: Background script that creates a hidden window loading empty.html on launch and notifies the test via chrome.test.sendMessage.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('empty.html', {
    hidden: true,
  }, function () {
    chrome.test.sendMessage('Launched');
  });
});