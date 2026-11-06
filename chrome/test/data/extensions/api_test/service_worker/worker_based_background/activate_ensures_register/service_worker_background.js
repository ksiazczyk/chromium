// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background for deleted registration test
// summary: Background service worker script for the test extension that signals readiness to the extension API test harness via chrome.test.sendMessage.
// ---

chrome.test.sendMessage('ready');
