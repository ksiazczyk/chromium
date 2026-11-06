// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Badge color update script using an RGBA array
// summary: Sets the badge background color using an RGBA array of 255 values and signals test success.
// ---

chrome.browserAction.setBadgeBackgroundColor({color: [255, 255, 255, 255]});
chrome.test.notifyPass();
