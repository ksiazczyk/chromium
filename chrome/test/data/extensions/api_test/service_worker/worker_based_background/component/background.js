// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Component extension service worker background test
// summary: Background service worker script for the component extension API test that creates a tab with a test server URL and succeeds when the tab creation is observed.
// ---

chrome.test.runTests([
  async function basicTest() {
    const config = await chrome.test.getConfig();
    const testUrl =
        `http://b.com:${config.testServer.port}/extensions/test_file.html`;
    chrome.tabs.onCreated.addListener((tab) => {
      if (tab.pendingUrl === testUrl) {
        chrome.test.succeed();
      }
    });
    chrome.tabs.create({url: testUrl});
  },
]);
