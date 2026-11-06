// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: a.js onload redirect to a.html#anchor
// summary: Redirects the page to a.html#anchor on load to trigger a reference fragment navigation for the test.
// ---

onload = function() {
  document.location = 'a.html#anchor';
};
