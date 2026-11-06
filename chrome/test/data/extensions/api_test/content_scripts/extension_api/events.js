// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Storage change event listener content script
// summary: Content script that listens for chrome.storage.onChanged and notifies the test framework of a pass when the event fires.
// ---

chrome.storage.onChanged.addListener(function() {
  chrome.test.notifyPass();
});
