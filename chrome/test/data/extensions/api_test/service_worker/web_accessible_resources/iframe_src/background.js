// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script registering the test service worker
// summary: Registers sw.js as the extension service worker and reports readiness or failure through chrome.test messages.
// ---

window.registerServiceWorker = function() {
  navigator.serviceWorker.register('sw.js')
      .then(function(registration) {
        return navigator.serviceWorker.ready;
      })
      .then(function(registration) {
        chrome.test.sendMessage('SW_READY');
      })
      .catch(function(err) {
        chrome.test.log('SW registration failure: ' + err);
        chrome.test.sendMessage('SW_FAILED');
      });
  return 'true';
};
