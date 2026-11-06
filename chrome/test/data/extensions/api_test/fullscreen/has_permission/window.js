// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fullscreen permission test window script
// summary: Test script that requests fullscreen on the page body and reports success or failure through chrome.test.
// ---

window.onload = function() {
  function requestFullscreen() {
    document.onwebkitfullscreenchange = chrome.test.succeed;
    document.onwebkitfullscreenerror = chrome.test.fail;
    chrome.test.runWithUserGesture(function() {
      document.body.webkitRequestFullscreen();
    });
  }
  document.body.onclick = requestFullscreen;  // enables manual testing.
  chrome.test.runTests([requestFullscreen]);
};
