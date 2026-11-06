// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker ping-pong message handler
// summary: Service worker script that replies with a pong message when it receives a ping, used by the platform app service worker test.
// ---

self.onmessage = function(e) {
  if (e.data && e.data.request === 'ping') {
    e.ports[0].postMessage({response: 'pong'});
  }
};
