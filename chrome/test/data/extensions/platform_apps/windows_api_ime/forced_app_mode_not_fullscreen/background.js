// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IME window fullscreen test background script
// summary: Runs a Chrome test asserting that an IME app window created with specific bounds is not forced into fullscreen.
// ---

var testBounds = {left: 0, top: 0, width: 24, height: 24};

chrome.test.runTests([

  // Window is created with specific bounds should not force to fullscreen.
  function testFullscreenIsNotForced() {
    chrome.app.window.create(
        'index.html',
        { ime: true, frame: 'none', innerBounds: testBounds},
        chrome.test.callbackPass(function(win) {
          chrome.test.assertEq(testBounds.left, win.innerBounds.left);
          chrome.test.assertEq(testBounds.top, win.innerBounds.top);
          chrome.test.assertEq(testBounds.width, win.innerBounds.width);
          chrome.test.assertEq(testBounds.height, win.innerBounds.height);
        }));
  }

]);
