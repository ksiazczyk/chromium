// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker message handler for storing and messaging clients
// summary: Service worker test helper that stores its client list and posts messages to the stored clients on command.
// ---

let clientList = [];

self.addEventListener('message', async e => {
  switch (e.data.command) {
    case 'StoreClients':
      e.waitUntil(new Promise(resolve => {
        done = resolve;
      }));
      clientList = await clients.matchAll({
        includeUncontrolled: true, type: 'window'});
      e.ports[0].postMessage('DONE');
      break;
    case 'PostMessageToStoredClients':
      for (const client of clientList)
        client.postMessage('hello!');
      e.ports[0].postMessage('DONE');
      done();
      break;
  }
});
