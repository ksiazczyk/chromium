// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for onActionIgnored redirect test extension
// summary: Test extension background script that redirects google.com requests to example.com and reports via chrome.test whether the redirect was ignored or successful.
// ---

let redirectIgnored = false;
let redirectedRequestId = null;

chrome.webRequest.onBeforeRequest.addListener(function(details) {
  if (details.url.includes('google.com') && details.type === 'main_frame') {
    redirectedRequestId = details.requestId;
    return {redirectUrl: details.url.replace('google.com', 'example.com')};
  }
}, {urls: ['<all_urls>']}, ['blocking']);

chrome.webRequest.onActionIgnored.addListener(function(details) {
  if (details.requestId === redirectedRequestId &&
      details.action === 'redirect') {
    redirectIgnored = true;
  }
});

chrome.webRequest.onCompleted.addListener(function(details) {
  // onActionIgnored should have been received by the time onCompleted is
  // received for the request. Notify the browser whether the redirect was
  // successful.
  if (details.requestId === redirectedRequestId) {
    const message =
        redirectIgnored ? 'redirect_ignored' : 'redirect_successful';
    chrome.test.sendMessage(message);
    redirectIgnored = false;
    redirectedRequestId = null;
  }
}, {urls: ['<all_urls>']});

chrome.test.sendMessage('ready_1');
