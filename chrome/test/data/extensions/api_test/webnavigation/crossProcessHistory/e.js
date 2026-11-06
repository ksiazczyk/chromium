// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script that pushes history state and redirects the test page
// summary: JavaScript for e.html that pushes a history state pointing to empty.html and redirects to a slowly loading test page.
// ---

function updateHistory() {
  history.pushState({}, '', 'empty.html');
}

onload = function() {
  setTimeout(function() {
    location.href = `http://127.0.0.1:${location.search.substr(1)}/test2`;
  }, 0);
};
