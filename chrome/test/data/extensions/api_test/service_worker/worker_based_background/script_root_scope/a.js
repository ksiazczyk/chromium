// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker registration test script
// summary: Registers sw.js as a service worker at the root scope and reports success or failure via chrome.test messages.
// ---

navigator.serviceWorker.register('sw.js')
    .then(function() {
      return navigator.serviceWorker.ready;
    })
    .then(function(registration) {
      chrome.test.sendMessage('WORKER_STARTED');
    })
    .catch(function(err) {
      chrome.test.sendMessage('REGISTRATION_FAILED');
    });
