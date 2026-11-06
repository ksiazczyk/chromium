// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Message relay from sandboxed iframe to test harness
// summary: Listens for postMessage events from the sandboxed iframe and forwards LAUNCHED or FAILURE status to the test harness via chrome.test.sendMessage.
// ---

window.addEventListener('message', function(e) {
  if (e.data === 'WebViewTest.LAUNCHED') {
    chrome.test.sendMessage('WebViewTest.LAUNCHED');
  } else if (e.data === 'WebViewTest.FAILURE') {
    chrome.test.sendMessage('WebViewTest.FAILURE');
  }
});
