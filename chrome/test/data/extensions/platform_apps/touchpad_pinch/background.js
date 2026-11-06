// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Touchpad pinch test app background script
// summary: Launches the touchpad pinch test app by creating a window from window.html when the app runtime fires onLaunched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html');
});
