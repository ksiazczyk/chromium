// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe script navigating after onload
// summary: Navigates iframe2 to iframe3.html after onload via setTimeout so the complete status fires in the tabs.onUpdated test.
// ---

window.onload = function() {
  // Navigate after onload so that 'complete' status will fire.
  setTimeout(function() {
    location.href = 'iframe3.html';
  }, 0);
};
