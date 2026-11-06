// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Skeleton app background script for embed requests
// summary: Background script that listens for onEmbedRequested and allows or denies embedding of main.html or web_view_focus_test.html based on the request data.
// ---

window.deferredRequest = null;
window.continueEmbedding = (allowRequest) => {
  if (window.deferredRequest) {
    if (allowRequest) {
      window.deferredRequest.allow('main.html');
    } else {
      window.deferredRequest.deny();
    }
  }
};

chrome.app.runtime.onEmbedRequested.addListener(function(request) {
  if (!request.embedderId)
    request.deny();

  if (request.data.deferRequest) {
    window.deferredRequest = request;
    return;
  }

  if (request.data.runWebViewInAppViewFocusTest) {
    request.allow('web_view_focus_test.html');
    return;
  }

  if (!request.data.foo) {
    request.allow('main.html');
    return;
  } else if (request.data.foo == 'bar') {
    request.deny();
  } else if (request.data.foo == 'bleep') {
    request.allow('main.html');
  }
});

