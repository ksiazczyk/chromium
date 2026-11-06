// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Log auth required test extension background script
// summary: Background script of a test extension that listens for webRequest.onAuthRequired events on all URLs and logs the request URL before responding with an empty callback.
// ---

chrome.webRequest.onAuthRequired.addListener((_details, callback) => {
  console.info('onAuthRequired', _details.url);
  callback({});
}, {urls: ['<all_urls>']}, ['asyncBlocking']);
