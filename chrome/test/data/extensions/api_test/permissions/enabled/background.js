// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// All of the calls to chrome.* functions should succeed, since this extension
// has requested all required permissions.

// ---docerion
// type: test
// title: Enabled permissions API test background script
// summary: Runs extension tests calling chrome.history, chrome.bookmarks and chrome.tabs, expecting all calls to succeed because the extension requests the required permissions.
// ---

const pass = chrome.test.callbackPass;

chrome.test.runTests([
  function history() {
    try {
      const query = {text: '', maxResults: 1};
      chrome.history.search(query, pass(function(results) {}));
    } catch (e) {
      chrome.test.fail();
    }
  },

  function bookmarks() {
    try {
      // Use getRecent() instead of get("1") because desktop Android doesn't
      // create the bookmark bar (id "1") by default.
      chrome.bookmarks.getRecent(1, pass(function(results) {}));
    } catch (e) {
      chrome.test.fail();
    }
  },

  function tabs() {
    try {
      chrome.tabs.query({active: true}, pass(function(results) {}));
    } catch (e) {
      chrome.test.fail();
    }
  },
]);
