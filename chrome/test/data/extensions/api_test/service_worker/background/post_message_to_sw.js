// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker message forwarding test script
// summary: Service worker test script that forwards each incoming message back through the message port supplied in the event data.
// ---

'use strict';

self.onmessage = function(e) {
  e.data.port.postMessage(e.data.message);
};
