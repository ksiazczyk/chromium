// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script for declarative webRequest rules
// summary: Background script of the webRequest permissions test extension that removes old rules, adds a declarativeWebRequest rule redirecting HTML requests, and signals test completion.
// ---

chrome.declarativeWebRequest.onRequest.removeRules();
const rule = {
  conditions: [
    new chrome.declarativeWebRequest.RequestMatcher(
        {url: {pathContains: '.html'}}),
  ],
  actions: [
    new chrome.declarativeWebRequest.RedirectRequest(
        {'redirectUrl': 'data:text/plain,redirected1'}),
  ],
};
function notifyDone() {
  chrome.test.sendMessage('done');
}
chrome.declarativeWebRequest.onRequest.addRules([rule], notifyDone);
