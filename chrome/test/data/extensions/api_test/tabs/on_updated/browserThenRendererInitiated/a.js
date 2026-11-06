// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect script from page A to page B
// summary: Redirects the browser to b.html on window load, producing the renderer-initiated navigation under test.
// ---

window.onload = function() {
  location.href = 'b.html';
};
