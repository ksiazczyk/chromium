// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: document_end.js content script test
// summary: Content script that fails the test if document_start has not run yet, otherwise marks document_end as run and reports success via chrome.test.
// ---

if (!window.documentStartRan) {
  console.error('document_end script triggered before document_start!');
  chrome.test.sendMessage('document-end-failure');
} else {
  window.documentEndRan = true;
  chrome.test.sendMessage('document-end-success');
}
