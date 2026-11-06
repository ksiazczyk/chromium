// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Event filter test background script
// summary: Background script for the event_filter extension API test that intercepts the windowExposedByDefault filter attribute and listens to webNavigation events with a URL filter.
// ---

// Make sure that putting interceptors on event filter attributes doesn't
// break anything.
Object.defineProperty(Object.prototype, 'windowExposedByDefault', {
  enumerable: true,
  get() {
    return 'hahaha';
  },
});
chrome.webNavigation.onBeforeNavigate.addListener(function() {
  chrome.test.notifyPass();
}, {url: [{hostContains: 'example.com'}]});

chrome.test.sendMessage('ready');
