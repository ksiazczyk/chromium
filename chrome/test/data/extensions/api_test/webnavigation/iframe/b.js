// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script b.js redirecting to c.html on load
// summary: Test fixture script that navigates its page to c.html once the page has loaded.
// ---

onload = function() {
  document.location = 'c.html';
};
