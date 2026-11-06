// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tab size browser test for chrome.tabs API
// summary: Runs browser tests that create a window, wait for a non-zero tab size, and verify a duplicated tab keeps the original tab's width and height.
// ---

let firstTabId;
let firstTab;

const SCRIPT_URL = '_test_resources/api_test/tabs/basics/tabs_util.js';
const loadScript = chrome.test.loadScript(SCRIPT_URL);

loadScript.then(async function() {
  chrome.test.runTests([
    function setupWindow() {
      createWindow([pageUrl('a')], {}, pass(function(winId, tabIds) {
                     firstTabId = tabIds[0];
                     waitForTabWithNonZeroSize(firstTabId, pass(function(tab) {
                                                 assertTrue(tab.width > 0);
                                                 assertTrue(tab.height > 0);
                                                 firstTab = tab;
                                               }));
                   }));
    },

    function sizeAfterDuplicatingTab() {
      chrome.tabs.duplicate(
          firstTabId, pass(function(tab) {
            waitForTabWithNonZeroSize(
                tab.id, pass(function(duplicatedTab) {
                  assertEq(firstTab.width, duplicatedTab.width);
                  assertEq(firstTab.height, duplicatedTab.height);
                }));
          }));
    },
  ]);
});
