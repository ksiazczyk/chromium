// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script for the steal XHR target handler
// summary: Background script that opens main.html on launch and calls chrome.test.fail, since this handler should never be launched.
// ---

chrome.app.runtime.onLaunched.addListener(function (launchData) {
  chrome.app.window.create("main.html", {}, function() {});
  chrome.test.fail("This handler shouldn't have launched");
});
