// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background webRequest redirect script
// summary: Background page script that listens for requests ending in redirect.js and redirects them to the extension's web-accessible war.js resource.
// ---

chrome.webRequest.onBeforeRequest.addListener(details => {
  if (details.url.endsWith('redirect.js')) {
    return {redirectUrl: chrome.runtime.getURL('war.js')};
  }
}, {urls: ['<all_urls>']}, ['blocking']);

chrome.test.sendMessage('ready');
