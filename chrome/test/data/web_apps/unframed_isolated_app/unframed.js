// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unframed display mode test script
// summary: Script fixture that sets the document title on load and when the unframed display-mode media query changes, letting browser tests verify the mode.
// ---

'use strict';

// This string must match with
// `UnframedIsolatedWebAppBrowserTest::kUnframedAppOnloadTitle`.
window.onload = function() {
  document.title = 'Unframed';
};

const mql = window.matchMedia('(display-mode: unframed)');
mql.addEventListener('change', event => {
  if (event.matches) {
    document.title = 'match-media-unframed';
  } else {
    document.title = 'Unframed';  // The same title as set onload.
  }
});
