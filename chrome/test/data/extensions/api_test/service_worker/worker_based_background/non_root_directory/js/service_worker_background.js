// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background test script
// summary: Minimal service worker background script for the non-root directory extension API test that reports success via chrome.test.notifyPass().
// ---

chrome.test.notifyPass();
