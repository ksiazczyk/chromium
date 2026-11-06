// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Badge color update script using the named color blue
// summary: Sets the badge background color to the named color blue and signals test success.
// ---

chrome.browserAction.setBadgeBackgroundColor({color: 'blue'});
chrome.test.notifyPass();
