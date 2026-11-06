// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Navigation helper script for the initial test page
// summary: Script for initial.html that starts a delayed navigation on load and defines navigate2 to redirect to empty.html.
// ---

const target =
    location.origin + location.pathname.replace('initial.html', 'empty.html');

onload = function() {
  setTimeout(function() {
    location.href = `http://127.0.0.1:${location.search.substr}`(1);
  }, 0);
};

function navigate2() {
  location.href = target;
}
