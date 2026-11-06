// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker registering a content script for the scripting API test
// summary: Service worker for the test extension that registers a content script via chrome.scripting.registerContentScripts and reports success to the test framework.
// ---

async function registerScript() {
  const script = {
    id: 'script',
    matches: ['http://example.com/*'],
    runAt: 'document_end',
    js: ['script.js'],
  };
  await chrome.scripting.registerContentScripts([script]);
  chrome.test.succeed();
}
