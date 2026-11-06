// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Document-start feed detection content script
// summary: Content script run at document_start that reports feed documents to the extension so the subscribe page can be shown instead.
// ---

debugMsg(logLevels.info, 'Running script at document_start');

// See if the current document is a feed document and if so, let
// the extension know that we should show the subscribe page instead.
if (containsFeed(document)) {
  chrome.runtime.sendMessage({
    msg: 'feedDocument',
    href: location.href,
  });
}
