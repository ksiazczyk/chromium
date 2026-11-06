
// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the webview test app
// summary: Opens the app window that hosts the webview when the Chrome platform app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('host.html', {}, () => { });
});
