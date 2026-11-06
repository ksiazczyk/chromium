// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page A load message script
// summary: Sends the page URL to the extension via chrome.runtime.sendMessage when page A finishes loading.
// ---

window.onload = function() {
  chrome.runtime.sendMessage(window.location.href);
};
