// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content tab test script
// summary: Sends the chrome.test message 'content_tab' to signal that the tab content page has loaded.
// ---

chrome.test.sendMessage('content_tab');
