// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker test helper with WebTransport connections
// summary: Dedicated worker script that opens or closes a WebTransport connection to a local echo server on message, used in back/forward cache tests.
// ---

let transport;

onmessage = async (msg) => {
  const tokens = msg.data.split(',');
  switch (tokens[0]) {
  case 'open':
    const port = tokens[1];
    transport = new WebTransport('https://localhost:' + port + '/echo');
    await transport.ready;
    postMessage('opened');
    break;
  case 'close':
    transport.close();
    await transport.closed;
    postMessage('closed');
    break;
  default:
    console.error(msg);
    break;
  }
};
