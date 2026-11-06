// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Favicon permission test script
// summary: Runs browser tests asserting the favicon image loads at 16x16 pixels while the theme image fails to load without permission.
// ---


window.onload = function() {
  chrome.test.runTests([
    function favicon() {
      const img = document.getElementById('favicon');
      chrome.test.assertEq(16, img.naturalWidth);
      chrome.test.assertEq(16, img.naturalHeight);
      chrome.test.succeed();
    },

    function theme() {
      const img = document.getElementById('theme');
      chrome.test.assertEq(0, img.naturalWidth);
      chrome.test.assertEq(0, img.naturalHeight);
      chrome.test.succeed();
    },
  ]);
};
