// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script that replaces history state and redirects
// summary: JavaScript for i.html that replaces the history state with empty.html and redirects to a slowly loading test page.
// ---

function updateHistory() {
  history.replaceState({}, '', 'empty.html');
}

onload = function() {
  setTimeout(function() {
    location.href = `http://127.0.0.1:${location.search.substr(1)}/test6`;
  }, 0);
};
