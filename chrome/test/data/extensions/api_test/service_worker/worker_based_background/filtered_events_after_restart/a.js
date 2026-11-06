// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Navigation script redirecting to b.html
// summary: On-load script that redirects the page to b.html, producing the second webNavigation commit the test verifies.
// ---

onload = function() {
  document.location = 'b.html';
};
