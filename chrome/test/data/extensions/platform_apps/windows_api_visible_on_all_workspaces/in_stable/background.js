// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// All these tests are run in Stable channel.

// ---docerion
// type: test
// title: Stable channel tests for visibleOnAllWorkspaces window API
// summary: Background script running Stable channel tests for the visibleOnAllWorkspaces create option and the canSetVisibleOnAllWorkspaces function.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.runTests([

    // Check CreateWindowOptions.visibleOnAllWorkspaces().
    function testCreateOption() {
      chrome.app.window.create(
          'index.html', {
            visibleOnAllWorkspaces: true,
          }, chrome.test.callbackPass(function () {}));
    },

    // Check chrome.app.window.canSetVisibleOnAllWorkspaces().
    function testCanSetVisibleOnAllWorkspaces() {
      chrome.test.assertTrue(
          typeof chrome.app.window.canSetVisibleOnAllWorkspaces == 'function');
      chrome.test.callbackPass(function () {})();
    },

  ]);
});
