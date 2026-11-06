// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script sending one-way message to service worker
// summary: Content script of the test extension that sends a one-way runtime message from a tab to the extension service worker.
// ---

chrome.runtime.sendMessage('tab->worker');
