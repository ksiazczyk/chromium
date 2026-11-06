// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebUI shared worker ping-pong test handler
// summary: Shared worker script that replies pong to ping messages, used in WebUI shared worker tests.
// ---

onconnect = (event) => {
  const port = event.ports[0];
  port.onmessage = (e) => {
    if (e.data === 'ping') {
      port.postMessage('pong');
    }
  };
};
