// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test start signal script
// summary: Sends the LOADED message via chrome.test to signal the test start from a separate file, since background.js may fail with a syntax error.
// ---

// We need to signal the start of the test from a different file because when
// the test fails, we have a syntax error in background.js.
chrome.test.sendMessage('LOADED');
