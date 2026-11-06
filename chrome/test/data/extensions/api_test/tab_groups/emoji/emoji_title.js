// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Emoji tab group title test script
// summary: Test script that groups the current tab and updates the tab group title to a clown emoji, then signals test success.
// ---

chrome.tabs.getCurrent((tab) => {
  chrome.tabs.group({tabIds: tab.id}, (groupId) => {
    chrome.tabGroups.update(groupId, {title: '🤡'}, (group) => {
      chrome.test.notifyPass();
    });
  });
});
