// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: History override test background service worker
// summary: Minimal extension service worker that immediately signals test success via chrome.test.notifyPass for the history override API test.
// ---

chrome.test.notifyPass();
