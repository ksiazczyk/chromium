// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: File slice Blob storage regression test for bug 369670458
// summary: Adds a sliced File to an IndexedDB object store in a readwrite transaction and completes only if no abort or error occurs.
// ---

'use strict';

let connection;
let file;

function populateObjectStore() {
  connection = event.target.result;
  let store = connection.createObjectStore('store-name', null);
}

function doTest() {
  const txn =
      connection.transaction('store-name', 'readwrite');
  txn.objectStore('store-name').add(file.slice(10, -10, file.type), 'key');
  txn.onabort = unexpectedAbortCallback;
  txn.onerror = unexpectedErrorCallback;
  txn.oncomplete = done;
}

function setUp() {
  document
      .getElementById('fileInput')
      .addEventListener('change', (e) => {
    file = e.target.files[0];
    indexedDBTest(populateObjectStore, doTest);
  });
}
