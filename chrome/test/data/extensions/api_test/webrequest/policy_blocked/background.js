// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for webRequest policy blocked test extension
// summary: Listens to webRequest events, counts requests to protected origins, and signals when a protected URL is observed during the policy blocked test.
// ---

self.protectedOriginCount = 0;

// Return messages to tell which URL requests are visible to the extension.
chrome.webRequest.onBeforeRequest.addListener(function(details) {
  if (details.url.indexOf('example2') !== -1) {
    ++self.protectedOriginCount;
  }
  if (details.url.indexOf('protected_url') !== -1) {
    chrome.test.sendMessage('protected_url');
  }
}, {urls: ['<all_urls>']}, []);

chrome.test.sendMessage('ready');
