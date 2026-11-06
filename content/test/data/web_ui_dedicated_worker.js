// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: web UI dedicated worker ping-pong script
// summary: JavaScript dedicated worker that replies pong to a ping message, used in WebUI worker tests.
// ---

self.onmessage = (e) => {
  if (e.data === 'ping') {
    self.postMessage('pong');
  }
};
