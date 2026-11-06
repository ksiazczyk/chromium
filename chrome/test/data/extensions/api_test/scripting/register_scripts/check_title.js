// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Check title test content script
// summary: Content script fixture that sends the current document title to the extension via a runtime message.
// ---

chrome.runtime.sendMessage(`DOCUMENT_TITLE: ${document.title}`);
