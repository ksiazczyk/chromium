// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script redirecting parent frame to c.html
// summary: On load, redirects the parent frame to c.html and replaces its own location with about:blank for the iframe navigation tests.
// ---

onload = function() {
  parent.location.href = 'c.html';
  location.replace('about:blank');
};
