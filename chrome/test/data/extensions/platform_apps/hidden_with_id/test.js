// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script creating hidden and visible app windows
// summary: Background script that creates a window with a fixed ID either hidden or visible and signals launch to the test harness.
// ---

function sendLaunchedAndRunReply() {
  chrome.test.sendMessage('Launched', function (reply) {
    if (reply)
      window[reply]();
  });
}

function createHidden() {
  chrome.app.window.create('empty.html', {
    id: 'hidden_with_id',
    hidden: true,
  }, function () {
    sendLaunchedAndRunReply();
  });
}

function createVisible() {
  chrome.app.window.create('empty.html', {
    id: 'hidden_with_id',
  }, function () {
    sendLaunchedAndRunReply();
  });
}

chrome.app.runtime.onLaunched.addListener(function() {
  sendLaunchedAndRunReply();
});
