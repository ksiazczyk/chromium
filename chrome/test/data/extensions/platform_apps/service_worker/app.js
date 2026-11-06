// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker registration and messaging test
// summary: Registers the sw.js service worker and exchanges a ping/pong message over a MessageChannel to verify service worker messaging in platform apps.
// ---

chrome.test.runTests([
  function registerAndPostMessage() {
    navigator.serviceWorker.register('sw.js').then(function() {
      return navigator.serviceWorker.ready;
    }).then(function(r) {
      var mc = new MessageChannel();
      mc.port1.onmessage = function(e) {
        mc.port1.onmessage = null;
        if (e.data && e.data.response === 'pong') {
          chrome.test.succeed();
        } else {
          chrome.test.fail();
        }
      };
      var sw = r.active;
      sw.postMessage({request: 'ping'}, [mc.port2]);
    }).catch(function(err) {
      chrome.test.fail();
    });
  }
]);
