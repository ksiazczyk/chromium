// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Panel behavior API test service worker
// summary: Service worker running chrome.test cases that verify default getPanelBehavior values and that setPanelBehavior acts as an upsert.
// ---

chrome.test.runTests([
  // Test the default values of fields for chrome.sidePanel.getPanelBehavior().
  async function defaultPanelBehavior() {
    const behavior = await chrome.sidePanel.getPanelBehavior();
    chrome.test.assertFalse(behavior.openPanelOnActionClick);
    chrome.test.succeed();
  },

  // Test that chrome.sidePanel.setPanelBehavior is an upsert operation.
  async function getAndSetPanelBehavior() {
    await chrome.sidePanel.setPanelBehavior({openPanelOnActionClick: true});
    let behavior = await chrome.sidePanel.getPanelBehavior();
    chrome.test.assertTrue(behavior.openPanelOnActionClick);

    await chrome.sidePanel.setPanelBehavior({});
    behavior = await chrome.sidePanel.getPanelBehavior();
    chrome.test.assertTrue(behavior.openPanelOnActionClick);

    chrome.test.succeed();
  },
]);
