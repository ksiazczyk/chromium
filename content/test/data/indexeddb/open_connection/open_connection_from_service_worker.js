// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IndexedDB open connection from service worker
// summary: Service worker script that opens an IndexedDB database, closes it, and reports the result to the caller over a message port.
// ---

'use strict';

self.onmessage = async function(e) {
  let connected;
  let connected_promise = new Promise(r => { connected = r; });
  let request = indexedDB.open("Foo", 1);

  request.onsuccess = e => {
    connected(e.target.result);
  };
  request.onerror = e => {
    connected(undefined);
  }

  let connection = await connected_promise;
  if (connection)
    connection.close();

  e.ports[0].postMessage({rqid: e.data.rqid, result: connection != undefined});
};
