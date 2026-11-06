// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker echo test script
// summary: Shared worker for DevTools tests that replies to each incoming message with the prefix 'reply'.
// ---

onconnect = function (event) {
  const port = event.ports[0];
  port.onmessage = function(e) {
    port.postMessage('reply ' + e.data);
  };
};