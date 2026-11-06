// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Badge color update script using an HSL string
// summary: Sets the badge background color using an HSL string and signals test success.
// ---

chrome.browserAction.setBadgeBackgroundColor({color: 'hsl(120, 100%, 50%)'});
chrome.test.notifyPass();
