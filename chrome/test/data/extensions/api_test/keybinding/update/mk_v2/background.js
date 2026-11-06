// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the media key update test extension
// summary: Minimal background service worker that calls chrome.test.notifyPass() to signal success in the keybinding media key update API test.
// ---

chrome.test.notifyPass();
