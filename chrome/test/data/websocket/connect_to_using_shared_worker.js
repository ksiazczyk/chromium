// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker WebSocket connection helper
// summary: Shared worker script that connects to a URL sent by the page and posts PASS or FAIL depending on whether the WebSocket opens.
// ---

onconnect = async function(event) {
  const port = event.ports[0];

  port.onmessage = async function(e) {
    const ws = new WebSocket(e.data.url);
    ws.onopen = () => port.postMessage('PASS');
    ws.onclose = () => port.postMessage('FAIL');
  };
};
