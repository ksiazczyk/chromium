// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker script for debugger tests
// summary: Worker script that responds to connect events by starting a port and posting an empty message, used in the debugger API tests.
// ---

self.addEventListener('connect', function(e) {
  const port = e.ports[0];
  port.start();
  port.postMessage({});
});
