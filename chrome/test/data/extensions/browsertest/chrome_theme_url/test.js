// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test verifying theme image load
// summary: Runs the extension test that checks the theme image has the expected 16x16 size and reports the result via chrome.test.sendMessage.
// ---

window.onload = function() {
  chrome.test.runTests([
    function theme() {
      const img = document.getElementById('theme');
      const loaded = img.naturalWidth === 16 && img.naturalHeight === 16;
      chrome.test.sendMessage(loaded ? 'loaded' : 'not loaded');
    },
  ]);
};
