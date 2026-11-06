// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page script that reports the current tab
// summary: On page load, calls chrome.tabs.getCurrent and sends the resulting tab object to the extension's message listener.
// ---

window.onload = function() {
  chrome.tabs.getCurrent(function(tab) {
    chrome.runtime.sendMessage(tab);
  });
};
