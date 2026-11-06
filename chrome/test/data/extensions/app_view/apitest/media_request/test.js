// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script approving embed requests
// summary: Background script that listens for onEmbedRequested events and allows each embed by loading main.html.
// ---

chrome.app.runtime.onEmbedRequested.addListener(function(request) {
  request.allow('main.html');
});
