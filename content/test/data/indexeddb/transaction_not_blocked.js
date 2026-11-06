// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IndexedDB non-blocking transaction test
// summary: Opens the doesnt-hang-test database and runs a readwrite transaction to completion without blocking or hanging.
// ---

function test()
{
  // Do not use indexedDBTest() - need to re-use previous database.
  var dbname = "doesnt-hang-test";
  var request = indexedDB.open(dbname);
  request.onerror = unexpectedErrorCallback;
  request.onblocked = unexpectedBlockedCallback;
  request.onupgradeneeded = unexpectedUpgradeNeededCallback;
  request.onsuccess = onOpenSuccess;
}

function onOpenSuccess()
{
  var db = event.target.result;

  debug('Creating new transaction.');
  var transaction = db.transaction('store', 'readwrite');
  transaction.onabort = unexpectedAbortCallback;
  var objectStore = transaction.objectStore('store');

  var request = objectStore.get(0);
  request.onerror = unexpectedErrorCallback;
  request.onsuccess = function() {
    debug("request completed successfully");
  };

  transaction.oncomplete = function() {
    debug("transaction completed");
    done();
  };
}
