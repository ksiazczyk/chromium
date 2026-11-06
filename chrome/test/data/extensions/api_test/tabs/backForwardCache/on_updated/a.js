// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect script a.js creating a history entry
// summary: On load, redirects the tab to b.html on b.com so a history entry exists for the later back navigation.
// ---

onload = function() {
  if (window.sessionStorage['redirected'] !== 1) {
    window.sessionStorage['redirected'] = 1;
    // Required so this results in a history entry being created.
    setTimeout(function() {
      location.href = 'http://b.com:' + location.port +
          '/extensions/api_test/tabs/backForwardCache/on_updated/b.html';
    }, 0);
  }
};
