// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script of the activeTab file URL test extension that signals 'ready' to the test harness on startup.
// ---

chrome.test.sendMessage('ready');
