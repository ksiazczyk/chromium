// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: New tab override test script
// summary: Script run by the overridden new tab page that sends the 'controlled by first' message to the browser test harness.
// ---

chrome.test.sendMessage('controlled by first');
