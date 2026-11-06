// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Imported shared worker connect handler
// summary: Listens for worker connect events, starts the port and posts an empty message, supporting the debugger worker discovery test.
// ---

self.addEventListener('connect', function(e) {
  const port = e.ports[0];
  port.start();
  port.postMessage({});
});
