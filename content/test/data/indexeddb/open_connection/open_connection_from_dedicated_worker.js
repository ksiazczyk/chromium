// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IndexedDB open connection from dedicated worker
// summary: Dedicated worker script that opens an IndexedDB database, closes it, and posts whether the connection succeeded back to the requester.
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

  self.postMessage({rqid: e.data.rqid, result: connection != undefined});
};
