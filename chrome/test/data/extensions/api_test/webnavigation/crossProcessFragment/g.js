// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'g.js: iframe navigation script for the fragment test'
// summary: Script that points the page's iframe at a slowly loading test server URL on load for the fragment update test.
// ---

const target = `${location.href}#foo`;

function updateFragment() {
  location.href = target;
}

onload = function() {
  const frame = document.getElementById('frame');
  frame.src = `http://127.0.0.1:${location.search.substr(1)}/test4`;
};
