// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: New tab override test script
// summary: Sends the 'controlled by second' test message via chrome.test when the overridden new tab page loads.
// ---

chrome.test.sendMessage('controlled by second');
