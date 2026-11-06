// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Version 2 service worker without skipWaiting
// summary: Service worker that replies with a pong message and intentionally omits skipWaiting to exercise update behavior.
// ---

this.onmessage = function(e) {
  e.ports[0].postMessage('Pong from version 2');
};

// Does not call self.skipWaiting() from oninstall handler.
