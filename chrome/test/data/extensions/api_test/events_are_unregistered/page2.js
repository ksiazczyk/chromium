// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test pass notification script
// summary: Signals test success via chrome.test.notifyPass after the first page has registered its listeners.
// ---

// See page1.js to make sense of this.
chrome.test.notifyPass();
