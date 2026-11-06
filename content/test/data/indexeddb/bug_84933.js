// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IndexedDB bug 84933 test script
// summary: Opens 25 IndexedDB databases named bug_84933_0 through 24 and closes the window after each open succeeds.
// ---

function test()
{
  var n = 25;
  for (var i = 0; i < n; i++) {
    indexedDB.open("bug_84933_" + i.toString()).onsuccess = function() {
      window.close();
    };
  }
}
