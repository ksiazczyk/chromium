// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Version 1 service worker replying to ping messages
// summary: Service worker that answers incoming messages with 'Pong from version 1' for the update test.
// ---

this.onmessage = function(e) {
  e.ports[0].postMessage('Pong from version 1');
};
