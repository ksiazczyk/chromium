// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that reports page modification status
// summary: Content script that sends the page hostname and whether the title was modified back to the background page for verification.
// ---

chrome.runtime.sendMessage({
  source: location.hostname,
  modified: window.title === 'Hello',
});
