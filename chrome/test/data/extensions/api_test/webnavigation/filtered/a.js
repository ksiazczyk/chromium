// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect fixture to the second test page
// summary: Fixture script that navigates the page to b.html on load to trigger webNavigation events.
// ---

onload = function() {
  document.location = 'b.html';
};
