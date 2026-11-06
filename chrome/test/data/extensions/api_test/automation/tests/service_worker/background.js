// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation API test background service worker script
// summary: Background script for the chrome.automation service worker test extension that fetches the automation desktop tree and signals readiness via chrome.test.sendMessage.
// ---

chrome.automation.getDesktop(() => chrome.test.sendMessage('got_tree'));
