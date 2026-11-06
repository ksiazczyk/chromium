// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker script for update test v2
// summary: Service worker for the updated test extension that answers messages with a version 2 pong and calls skipWaiting on install to activate immediately.
// ---

this.onmessage = function(e) {
  e.ports[0].postMessage('Pong from version 2');
};

this.oninstall = function(e) {
  e.waitUntil(self.skipWaiting());
};
