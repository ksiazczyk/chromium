// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background logging a console error
// summary: Test service worker that intentionally logs a console error and then signals test success via chrome.test.notifyPass.
// ---

// Intentional console error.
console.error('Logged from MV3 service worker');
chrome.test.notifyPass();
