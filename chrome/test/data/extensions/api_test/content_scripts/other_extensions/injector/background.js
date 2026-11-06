// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injector extension background script
// summary: Background script of the test extension that logs its load and opens the test.html page in a new tab.
// ---

console.info('INJECTOR: Loaded injector!');

chrome.tabs.create({url: 'test.html'});
