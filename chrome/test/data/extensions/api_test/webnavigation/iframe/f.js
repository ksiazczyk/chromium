// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script f.js redirecting to g.html on load
// summary: Test fixture script that navigates its iframe to g.html once the page has loaded.
// ---

onload = function() {
  document.location = 'g.html';
};
