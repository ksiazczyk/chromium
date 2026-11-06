// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script registering a content script for the incognito test
// summary: Test extension background script that registers a content script for a sample site via the chrome.scripting API and then signals test success.
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
