// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of the remove popup test extension
// summary: Queries the active tab and signals that the extension loaded successfully via chrome.test.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.test.notifyPass();
});
