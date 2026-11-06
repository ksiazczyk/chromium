// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script sending a test message
// summary: Content script fixture that notifies the test harness via chrome.test.sendMessage when it has been injected into a page.
// ---

chrome.test.sendMessage('script injected');
