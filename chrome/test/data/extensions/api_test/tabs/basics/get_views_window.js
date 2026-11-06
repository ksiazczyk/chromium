// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Get views window tests
// summary: Browser tests checking chrome.extension.getViews for empty normal windows, windows with one or many URLs, and a detached tab.
// ---

chrome.test.runTests([
  function canGetViewsOfEmptyWindow() {
    testGetNewWindowView({type: 'normal'}, []);
  },

  function canGetViewsOfWindowWithUrl() {
    const urls = ['a.html'];
    testGetNewWindowView({type: 'normal', url: urls}, urls);
  },

  function canGetViewsOfWindowWithManyUrls() {
    const urls = ['a.html', 'b.html', 'c.html'];
    testGetNewWindowView({type: 'normal', url: urls}, urls);
  },

  function canGetViewsOfDetatchedTab() {
    // Start with a window holding two tabs.
    chrome.windows.create({url: ['a.html', 'b.html']}, function(win) {
      // Detatch the first tab.  See that the tab is findable with the new
      // window ID.
      testGetNewWindowView({type: 'normal', tabId: win.tabs[0].id}, ['a.html']);
    });
  },
]);
