// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Declarative webRequest test background script
// summary: Background script for the split-incognito webRequest permissions test that registers a declarativeWebRequest redirect rule whose action differs by incognito context.
// ---

chrome.declarativeWebRequest.onRequest.removeRules();
const rule = {
  conditions: [
    new chrome.declarativeWebRequest.RequestMatcher(
        {url: {pathContains: '.html'}}),
  ],
  actions: [],
};
if (chrome.extension.inIncognitoContext) {
  rule.actions = [
    new chrome.declarativeWebRequest.RedirectRequest(
        {'redirectUrl': 'data:text/plain,redirected2'}),
  ];
} else {
  rule.actions = [
    new chrome.declarativeWebRequest.RedirectRequest(
        {'redirectUrl': 'data:text/plain,redirected1'}),
  ];
}
function notifyDone() {
  if (chrome.extension.inIncognitoContext) {
    chrome.test.sendMessage('done_incognito');
  } else {
    chrome.test.sendMessage('done');
  }
}
chrome.declarativeWebRequest.onRequest.addRules([rule], notifyDone);
