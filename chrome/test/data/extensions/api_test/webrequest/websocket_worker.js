// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebSocket worker test helper
// summary: Worker test helper that opens a WebSocket and posts PASS or FAIL depending on whether the connection behaves as expected.
// ---

self.onmessage = (message) => {
  const ws = new WebSocket(message.data.url);
  const expectedToConnect = message.data.expectedToConnect;
  const messageData = 'test message';

  ws.onerror = (error) => {
    postMessage(expectedToConnect ? 'FAIL; onerror' : 'PASS');
  };
  ws.onmessage = (message) => {
    if (!expectedToConnect || message.data !== messageData) {
      postMessage('FAIL; onmessage');
    }
    ws.close();
  };
  ws.onclose = (event) => {
    if (expectedToConnect) {
      postMessage(event.wasClean ? 'PASS' : 'FAIL; onclose');
    }
  };
  ws.onopen = () => {
    if (!expectedToConnect) {
      postMessage('FAIL; onopen');
    }
    ws.send(messageData);
  };
};
