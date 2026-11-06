// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fullscreen app background script
// summary: Background script for the fullscreen test app that opens blank.html in a window with fullscreen state when the app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('blank.html', ({'state': 'fullscreen'}));
});
