// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'f.js: navigation script for the redirect test page'
// summary: Script that navigates to a slowly loading test server page on load so the fragment update can be observed before commit.
// ---

const target = `${location.href}#foo`;

function updateFragment() {
  location.href = target;
}

onload = function() {
  setTimeout(function() {
    location.href = `http://127.0.0.1:${location.search.substr(1)}/test3`;
  }, 0);
};
