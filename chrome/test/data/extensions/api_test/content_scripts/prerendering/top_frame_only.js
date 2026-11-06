// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Top frame content script test helper
// summary: Content script injected only in the top frame that reports its injection and signals page activation by listening for the prerenderingchange event.
// ---

chrome.runtime.sendMessage('top_frame_only');

document.addEventListener('prerenderingchange', () => {
  chrome.runtime.sendMessage('activated');
});
