// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Intentionally not listening for onEmbedRequested.

// ---docerion
// type: test
// title: Background script of the no embed request listener test app
// summary: Background script of a Chrome test app that opens main.html on launch and intentionally does not listen for onEmbedRequested.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {}, function () {});
});
