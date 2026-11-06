// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Restart test background script
// summary: Background script for the restart test app that sends the onRestarted test message when the app runtime fires the onRestarted event.
// ---

chrome.app.runtime.onRestarted.addListener(function (e) {
  chrome.test.sendMessage("onRestarted");
});
