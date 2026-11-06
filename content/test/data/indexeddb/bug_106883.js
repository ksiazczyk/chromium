// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Delete non-existent database regression test for bug 106883
// summary: Deletes a non-existent IndexedDB database and closes the window on success to verify the browser handles the case without crashing.
// ---

function test()
{
  indexedDB.deleteDatabase('no-such-database').onsuccess = function() {
    window.close();
  };
}
