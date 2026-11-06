// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background for events-to-stopped extension test
// summary: Service worker background script that signals readiness to the C++ test harness and reports a tab-move event after removing its listener.
// ---

chrome.tabs.onMoved.addListener(function localListener(tabId, moveInfo) {
  chrome.tabs.onMoved.removeListener(localListener);
  chrome.test.sendMessage('moved-tab');
});

// Tell the C++ side of the test that the onCreated listener was added.
chrome.test.sendMessage('ready');
