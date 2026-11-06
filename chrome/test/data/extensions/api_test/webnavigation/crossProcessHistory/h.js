// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script that navigates the test iframe
// summary: JavaScript for h.html that pushes a history state and points the iframe at a slowly loading test URL.
// ---

function updateHistory() {
  history.pushState({}, '', 'empty.html');
}

onload = function() {
  const frame = document.getElementById('frame');
  frame.src = `http://127.0.0.1:${location.search.substr(1)}/test5`;
};
