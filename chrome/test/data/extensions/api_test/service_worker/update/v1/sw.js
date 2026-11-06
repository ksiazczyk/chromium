// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker update test service worker script
// summary: Service worker of the version 1 test extension that answers incoming messages with 'Pong from version 1' over the provided message port.
// ---

this.onmessage = function(e) {
  e.ports[0].postMessage('Pong from version 1');
};
