// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TODO(kalman): Consolidate this test script with the other clipboard tests.

// ---docerion
// type: test
// title: Clipboard test content script
// summary: Content script that copies and pastes text through execCommand in textareas and reports the result back to the extension on message.
// ---

function appendTextarea() {
  return document.body.appendChild(document.createElement('textarea'));
}

function run() {
  const textIn = appendTextarea();

  textIn.focus();
  textIn.value = 'foobar';
  textIn.selectionStart = 0;
  textIn.selectionEnd = 'foobar'.length;
  if (!document.execCommand('copy')) {
    return 'Failed to copy';
  }

  const textOut = appendTextarea();

  textOut.focus();
  if (!document.execCommand('paste')) {
    return 'Failed to paste';
  }
  if (textOut.value !== 'foobar') {
    return `Expected 'foobar', got ${textOut.value}`;
  }

  return '';
}

chrome.runtime.onMessage.addListener(function(message, sender, sendResponse) {
  sendResponse(run());
});
