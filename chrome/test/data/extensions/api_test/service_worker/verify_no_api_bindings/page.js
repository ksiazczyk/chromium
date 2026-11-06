// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page script registering the service worker and relaying results
// summary: Registers the service worker and forwards its binding check results to the browser test harness via chrome.test messages.
// ---

let worker = null;
const FAILURE_MESSAGE = 'FAILURE';

window.runServiceWorker = function() {
  navigator.serviceWorker.register('sw.js')
      .then(function() {
        return navigator.serviceWorker.ready;
      })
      .then(function(registration) {
        worker = registration.active;
        chrome.test.sendMessage('WORKER STARTED');
      })
      .catch(function(err) {
        chrome.test.sendMessage(FAILURE_MESSAGE);
      });
};

window.testSendMessage = function() {
  if (worker == null) {
    chrome.test.sendMessage(FAILURE_MESSAGE);
    return;
  }
  const channel = new MessageChannel();
  channel.port1.onmessage = function(e) {
    chrome.test.sendMessage(e.data);
  };
  worker.postMessage('checkBindingsTest', [channel.port2]);
};
