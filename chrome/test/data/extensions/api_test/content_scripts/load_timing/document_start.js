// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: document_start.js content script test
// summary: Content script that marks document_start as run in the window and sends a success message to the test harness.
// ---

window.documentStartRan = true;
chrome.test.sendMessage('document-start-success');
