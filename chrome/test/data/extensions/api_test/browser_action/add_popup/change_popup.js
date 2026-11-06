// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script changing the browser action popup
// summary: Script that changes the browser action popup to another_popup.html and notifies the test pass.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.browserAction.setPopup({
    popup: 'another_popup.html',
  });
  chrome.test.notifyPass();
});
