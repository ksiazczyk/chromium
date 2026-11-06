// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script redirecting test.js requests to war.js
// summary: Background script of a test extension that uses the webRequest API to redirect requests ending in test.js to the web-accessible war.js resource and signals readiness via chrome.test.
// ---

chrome.webRequest.onBeforeRequest.addListener(details => {
  if (details.url.endsWith('test.js')) {
    return {redirectUrl: chrome.runtime.getURL('war.js')};
  }
}, {urls: ['<all_urls>']}, ['blocking']);

chrome.test.sendMessage('ready');
