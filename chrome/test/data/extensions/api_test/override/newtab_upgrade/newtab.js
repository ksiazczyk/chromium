// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: New tab override test script sending an upgrade message
// summary: Sends a chrome.test message reporting that the new tab page is controlled by the first upgrade, so the browser test can observe the override.
// ---

chrome.test.sendMessage('controlled by first upgrade');
