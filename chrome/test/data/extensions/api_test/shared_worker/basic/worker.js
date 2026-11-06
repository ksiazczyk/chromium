// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker test script
// summary: Shared worker that listens for connect events and posts the message 'hullo there!' back to the connecting port.
// ---

self.addEventListener('connect', function(e) {
  const port = e.ports[0];
  port.start();
  port.postMessage('hullo there!');
});
