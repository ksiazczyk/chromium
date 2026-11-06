// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Events API test background script
// summary: Runs browser tests for chrome.action.onClicked listener management and verifies that two pages attaching to the same event does not trigger a DCHECK.
// ---

chrome.test.runTests([
  function listenerManagement() {
    function emptyFunction() {}
    chrome.action.onClicked.addListener(emptyFunction);
    chrome.test.assertTrue(chrome.action.onClicked.hasListeners());
    chrome.action.onClicked.removeListener(emptyFunction);
    chrome.test.assertFalse(chrome.action.onClicked.hasListeners());
    chrome.test.succeed();
  },

  // Tests that 2 pages attaching to the same event does not trigger a DCHECK.
  function twoPageAttach() {
    // Test harness should already have opened tab.html, which registers this
    // listener.
    chrome.action.onClicked.addListener(function() {});

    // Test continues in twoPageAttach.html.
    chrome.tabs.create({url: 'twoPageAttach.html'});
  },
]);
