// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tabs onUpdated title test script
// summary: Test script that changes the document title twice after page load to trigger tabs.onUpdated title change events.
// ---

window.onload = function() {
  setTimeout(function() {
    document.title = 'foo';
    setTimeout(function() {
      document.title = 'bar';
    }, 0);
  }, 0);
};
