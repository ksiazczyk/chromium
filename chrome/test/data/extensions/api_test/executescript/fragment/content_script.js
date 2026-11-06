// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script notifying background on page load
// summary: Content script that sends a runtime message to the background page once the document is ready, letting the test know it can start fragment navigation.
// ---

function notify() {
  chrome.runtime.sendMessage('content_script');
}

if (document.readyState) {
  notify();
} else {
  document.onload = notify;
}
