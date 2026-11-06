// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content popup test script
// summary: Sends the chrome.test message 'content_popup' to signal that the popup content page has loaded.
// ---

chrome.test.sendMessage('content_popup');
