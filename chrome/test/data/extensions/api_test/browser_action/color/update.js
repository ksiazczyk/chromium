// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Badge color update script using short hex green
// summary: Sets the browser action badge background color to short-form hex green and signals test success.
// ---

chrome.browserAction.setBadgeBackgroundColor({color: '#0F0'});
chrome.test.notifyPass();
