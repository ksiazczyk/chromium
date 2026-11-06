// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script for the registration at startup test
// summary: Service worker script that sends a WORKER_RUNNING message and attaches an onStartup listener so the worker is kicked off on every browser start during the test.
// ---

chrome.test.sendMessage('WORKER_RUNNING');

// Attach a dummy listener for onStartup to kick off the service worker on
// every browser start, so we send "WORKER_RUNNING" message.
chrome.runtime.onStartup.addListener(() => {});
