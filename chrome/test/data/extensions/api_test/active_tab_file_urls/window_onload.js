// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window onload file URL access check
// summary: On window load, checks whether the file URL iframe is readable and reports 'allowed' or 'denied' to the test harness.
// ---

window.onload = function() {
  const iframe = document.getElementById('file_iframe');
  try {
    const url = iframe.contentWindow.location.href;
    if (url === 'about:blank') {
      chrome.test.sendMessage('denied');
    }
  } catch (e) {
    const expectedError =
        `Failed to read a named property 'href' from 'Location': Blocked a ` +
        `frame with origin "${window.location.origin}" from ` +
        `accessing a cross-origin frame.`;
    if (e.message === expectedError) {
      chrome.test.sendMessage('allowed');
    }
  }
};
