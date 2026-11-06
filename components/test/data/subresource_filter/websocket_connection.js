// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebSocket connection test helper script
// summary: Test helper that opens a WebSocket, sends a message, and reports onmessage or onclose events, usable in a worker or the main document.
// ---

// Note: This JS can run either in a worker or as a script in the main document
// context.
function connectWebSocketWithMessageCallback(url, messageCallback) {
  const ws = new WebSocket(url);

  ws.onopen = () => {
    ws.send('hello world');
  };

  ws.onclose = () => {
    messageCallback('onclose');
  };

  ws.onmessage = () => {
    messageCallback('onmessage');
  };
}
