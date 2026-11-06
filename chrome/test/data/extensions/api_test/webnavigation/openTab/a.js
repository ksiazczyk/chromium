// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: a.js
// summary: Test page script that opens b.html in a new window on load to trigger webNavigation events in the openTab test.
// ---

onload = function() {
  window.open('b.html');
};
