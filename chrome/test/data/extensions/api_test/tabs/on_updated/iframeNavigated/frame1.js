// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe script navigating during onload
// summary: Navigates iframe1 to iframe2.html during onload so the complete status does not fire in the tabs.onUpdated test.
// ---

window.onload = function() {
  // Navigate during the onload so that 'complete' status won't fire.
  location.href = 'iframe2.html';
};
