// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Document start feed detection content script
// summary: Content script running at document_start that tells the extension to show the subscribe page when the document itself is a feed.
// ---

debugMsg(logLevels.info, 'Running script at document_start');

// See if the current document is a feed document and if so, let
// the extension know that we should show the subscribe page instead.
if (containsFeed(document)) {
  chrome.extension.sendMessage({msg: 'feedDocument', href: location.href});
}
