// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Incognito extension test background script
// summary: Background service worker that runs browser tests enumerating windows and cookie stores for the incognito dont_create_profile extension API test.
// ---

chrome.test.runTests([
  function enumerateTabs() {
    chrome.windows.getAll({populate: true}, function(windows) {
      chrome.test.succeed();
    });
  },
  function getAllCookieStores() {
    chrome.cookies.getAllCookieStores(function(stores) {
      chrome.test.succeed();
    });
  },
]);
