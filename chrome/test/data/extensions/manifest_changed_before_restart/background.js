// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script of the test extension that listens for tab creation and signals readiness to the test harness via chrome.test.sendMessage.
// ---

chrome.tabs.onCreated.addListener(() => {});

chrome.test.sendMessage('ready');
