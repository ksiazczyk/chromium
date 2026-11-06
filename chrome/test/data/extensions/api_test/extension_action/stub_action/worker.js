// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension service worker
// summary: Service worker of the stub action test extension that signals readiness to the test harness via chrome.test.sendMessage.
// ---

chrome.test.sendMessage('ready');
