// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Document-end script reporting frame results
// summary: Document-end content script that checks the document_start script ran and reports the frame body text as a jsresult message.
// ---

if (typeof hasRunContentScriptAtDocumentStart === 'undefined') {
  chrome.runtime.sendMessage('document_start script has not run!');
} else if (window.parent !== window) {
  // Assume iframe
  chrome.runtime.sendMessage('jsresult/' + document.body.textContent.trim());
}
