// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Webview focus visibility test app background script
// summary: Launches the test app window when the app starts, serving as the background entry point of the focus visibility test extension.
// ---


chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html');
});

