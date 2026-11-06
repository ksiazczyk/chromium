// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Enterprise kiosk test app background script
// summary: Background script that opens the test app's 1024x768 window when the kiosk app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html',
                           {"bounds" : {"width" : 1024, "height" : 768}});
});
