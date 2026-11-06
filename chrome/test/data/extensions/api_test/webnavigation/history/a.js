// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script a.js
// summary: Fixture script that pushes a new history state to b.html when the page loads.
// ---

onload = function() {
  history.pushState({}, 'foo', 'b.html');
};
