// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect-on-load script for the b test page
// summary: Fixture script that redirects the page to c.html on load to exercise webNavigation events.
// ---

onload = function() {
  document.location = 'c.html';
};
