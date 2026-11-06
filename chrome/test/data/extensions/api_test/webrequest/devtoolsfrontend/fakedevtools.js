// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake DevTools notification script for webRequest tests
// summary: Script that on page load notifies the test extension via an image request to the completion URL from the location hash, since top-level navigation to non-devtools URLs is disallowed.
// ---

window.onload = function() {
  if (location.hash) {
    const completionUrl = new URL(location.hash.slice(1)).href;

    console.info(
        'Fake devtools loaded. Going to notify test extension via ' +
        completionUrl);

    // Cannot do "location.href = completionUrl" because devtools://...
    // disallows top-level navigation to a non-devtools:-URL.
    new Image().src = completionUrl;
  }
};
