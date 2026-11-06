// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for webRequest initiator test extension
// summary: Background script of a test extension that counts intercepted webRequest events and sends the request initiator via chrome.test.sendMessage.
// ---

self.requestsIntercepted = 0;

chrome.webRequest.onBeforeRequest.addListener((details) => {
  self.requestsIntercepted++;
  chrome.test.sendMessage(details.initiator);
}, {urls: ['*://*/extensions/api_test/webrequest/xhr/data.json']}, []);

chrome.test.sendMessage('ready');
