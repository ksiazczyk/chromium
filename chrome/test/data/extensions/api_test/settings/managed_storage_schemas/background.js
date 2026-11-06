// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Managed storage test background script
// summary: Background service worker for the managed storage test extension that signals readiness to the test runner via chrome.test.sendMessage.
// ---

chrome.test.sendMessage('ready');
