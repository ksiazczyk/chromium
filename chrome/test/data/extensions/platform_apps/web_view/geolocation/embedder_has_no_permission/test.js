// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script launching the embedder test window
// summary: Listens for the app launch event and opens embedder.html to start the webview geolocation permission test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('embedder.html', {}, function () {});
});
