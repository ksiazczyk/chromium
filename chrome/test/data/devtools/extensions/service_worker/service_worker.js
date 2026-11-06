// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test service worker script
// summary: Minimal service worker that logs PASS and sends a WORKER_ACTIVATED message so DevTools extension tests can detect worker activation.
// ---

console.log('PASS');
chrome.test.sendMessage('WORKER_ACTIVATED');
