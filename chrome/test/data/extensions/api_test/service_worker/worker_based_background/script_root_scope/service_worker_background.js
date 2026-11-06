// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker opening the test page
// summary: Background service worker that opens a.html so its script can attempt to register a service worker at the root scope.
// ---

// Open a tab to the doc that includes a script that will attempt to
// register a service worker at the root scope.
chrome.tabs.create({url: chrome.runtime.getURL('a.html')});
