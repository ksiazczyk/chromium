// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Filtered events test page script a.js
// summary: Test page script that redirects the tab to b.html on load so the service worker can observe webNavigation events.
// ---

onload = function() {
  document.location = 'b.html';
};
