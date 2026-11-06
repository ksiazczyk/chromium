// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect script from extension page to HTTP server
// summary: On load, redirects the page to empty.html on the local test server, triggering a cross-process navigation.
// ---

onload = function() {
  setTimeout(function() {
    location.href = `http://127.0.0.1:${location.search.substr(1)}/` +
        'extensions/api_test/webnavigation/crossProcess/empty.html';
  }, 0);
};
