// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Keybinding action test service worker
// summary: Background service worker for the keybinding action test that listens for action clicks and signals test pass to the Chrome test framework.
// ---

chrome.action.onClicked.addListener(function(tab) {
  chrome.test.notifyPass();
});

chrome.test.notifyPass();
