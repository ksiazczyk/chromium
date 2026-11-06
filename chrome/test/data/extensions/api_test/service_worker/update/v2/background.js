// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker update test v2 background script
// summary: Test extension background script that waits for the service worker controller change, pings the active worker over a message channel, and reports replies via chrome.test.
// ---

const controllerChangePromise = new Promise(function(resolve, reject) {
  navigator.serviceWorker.oncontrollerchange = function(e) {
    navigator.serviceWorker.ready
        .then(function(registration) {
          resolve(registration.active);
        })
        .catch(function(err) {
          reject('oncontrollerchange failure');
        });
  };
});

controllerChangePromise
    .then(function(serviceWorker) {
      const channel = new MessageChannel();
      channel.port1.onmessage = function(e) {
        chrome.test.log(`Message received from SW: ${e.data}`);
        chrome.test.sendMessage(e.data);
      };
      serviceWorker.postMessage('ping', [channel.port2]);
    })
    .catch(function(err) {
      console.info(err);
      chrome.test.sendMessage('FAILURE_V2');
    });
