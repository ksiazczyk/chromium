// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window update focus parameter test
// summary: Runs chrome.test cases that call chrome.windows.update with focused set to true and assert the window dimensions remain unchanged.
// ---

const pass = chrome.test.callbackPass;

let previousTop = 0;
let left = 0;
let width = 0;
let height = 0;

let chromeWindow = null;

function checkDimensions(currentWindow) {
  chrome.test.assertEq(previousTop, currentWindow.top);
  chrome.test.assertEq(left, currentWindow.left);
  chrome.test.assertEq(width, currentWindow.width);
  chrome.test.assertEq(height, currentWindow.height);
}

function setFocus(tab) {
  previousTop = chromeWindow.top;
  left = chromeWindow.left;
  width = chromeWindow.width;
  height = chromeWindow.height;

  chrome.windows.update(
      chromeWindow.id,
      {'focused': true},
      pass(checkDimensions),
  );
}

chrome.test.runTests([
  function setFocusWithNoResize() {
    chrome.windows.getCurrent(pass(function(currentWindow) {
      chromeWindow = currentWindow;
      chrome.tabs.create(
          {'windowId': currentWindow.id, 'url': 'blank.html'},
          pass(setFocus),
      );
    }));
  },
]);
