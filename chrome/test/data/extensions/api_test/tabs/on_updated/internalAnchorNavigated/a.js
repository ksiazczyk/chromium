// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Internal anchor navigation script
// summary: 'Script for the test page that navigates to the #b anchor after onload so the complete status fires for the tabs.onUpdated test.'
// ---

window.onload = function() {
  // Navigate after the onload, so the 'complete' status will fire.
  setTimeout(function() {
    location.href = '#b';
  }, 0);
};
