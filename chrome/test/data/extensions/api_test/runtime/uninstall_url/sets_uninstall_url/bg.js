// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script setting the uninstall URL
// summary: Test extension service worker that calls chrome.runtime.setUninstallURL and notifies the test harness that it is ready.
// ---

chrome.runtime.setUninstallURL('https://www.google.com');

chrome.test.sendMessage('ready');
