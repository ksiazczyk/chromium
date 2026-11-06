// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script opening the app window
// summary: Background script that listens for the app launch event and creates an app window loading index.html.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('index.html');
});
