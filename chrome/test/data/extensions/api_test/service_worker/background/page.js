// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page message test script
// summary: Sends a runtime message from the page and reports the responding background page's label via chrome.test.
// ---

chrome.runtime.sendMessage({sourceCheck: true}, function(e) {
  chrome.test.sendMessage(e.label);
});
