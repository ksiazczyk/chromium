// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IndexedDB force close event handler test
// summary: Opens an IndexedDB connection, keeps it from garbage collection, and updates the document title when the connection is force closed.
// ---

function test() {
  indexedDBTest(onUpgradeNeeded, onOpenSuccess);
}

function onUpgradeNeeded(e) {
}

function onOpenSuccess(e) {
  // Don't let GC claim the connection
  window.db = e.target.result;
  window.db.onclose = onDatabaseClose;
  document.title = 'connection ready';
}

function onDatabaseClose(e)
{
  document.title = 'connection closed';
}
