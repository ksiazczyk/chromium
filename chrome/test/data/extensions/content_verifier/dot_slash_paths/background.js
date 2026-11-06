// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script opening pages with dot-slash paths
// summary: Background script of the test extension that opens page.html and dir/page2.html and reports readiness via chrome.test.
// ---

chrome.tabs.create({url: './page.html'});
chrome.tabs.create({url: 'dir/page2.html'});

if (chrome.test) {
  chrome.test.sendMessage('background ok');
}
