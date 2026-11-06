// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe script notifying the test of load
// summary: Sends an 'iframe_loaded' message through chrome.test when the extension iframe finishes loading.
// ---

chrome.test.sendMessage('iframe_loaded');
