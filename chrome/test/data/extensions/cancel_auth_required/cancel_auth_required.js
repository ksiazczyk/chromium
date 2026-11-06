// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cancel onAuthRequired test extension background script
// summary: Background script for a test extension that listens for webRequest onAuthRequired events on all URLs and cancels them via async blocking.
// ---

chrome.webRequest.onAuthRequired.addListener((_details, callback) => {
  callback({cancel: true});
}, {urls: ['<all_urls>']}, ['asyncBlocking']);
