// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script setting red badge color for browser action test
// summary: Test extension background script that sets the browser action badge background color to red and notifies the test of success.
// ---

chrome.browserAction.setBadgeBackgroundColor({color: '#FF0000'});
chrome.test.notifyPass();
