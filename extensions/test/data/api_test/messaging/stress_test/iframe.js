// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe script sending runtime messages and reporting results
// summary: Iframe script that sends a getData message to the background worker and posts success or failure back to the parent page.
// ---

chrome.runtime.sendMessage({type: 'getData'}, (response) => {
  // A successful response should contain the expected data and no error.
  const success =
      !chrome.runtime.lastError && response && response.data === 'success';

  if (!success) {
    console.error(
        'Messaging stress test: iframe failed to receive response.',
        chrome.runtime.lastError);
  }

  parent.postMessage(success ? 'success' : 'fail', '*');
});
