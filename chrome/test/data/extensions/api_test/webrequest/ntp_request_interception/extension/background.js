// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NTP request interception test extension background script
// summary: Background script for the NTP request interception test extension that listens for webRequest events and reports whether the requested URL was intercepted.
// ---

let urlToIntercept;
let interceptedRequest = false;

chrome.webRequest.onBeforeRequest.addListener(function(details) {
  if (urlToIntercept && details.url === urlToIntercept) {
    interceptedRequest = true;
  }
}, {
  urls: ['<all_urls>'],
});

function getAndResetRequestIntercepted() {
  chrome.test.sendScriptResult(interceptedRequest);
  interceptedRequest = false;
}

chrome.test.sendMessage('ready', function(url) {
  urlToIntercept = url;
});
