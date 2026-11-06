// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: webRequest hosted app test background script
// summary: Background script that listens for webRequest events on hosted app URLs and reports the request type via chrome.test.sendMessage.
// ---

chrome.webRequest.onBeforeRequest.addListener(function(details) {
  chrome.test.sendMessage(details.type);
}, {
  urls: ['*://*/*webrequest_hosted_app*'],
});
