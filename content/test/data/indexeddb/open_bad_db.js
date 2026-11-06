// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: IndexedDB open bad database test script
// summary: Test script that opens 'database-basics' and asserts total data loss, an upgradeneeded event and that pre-existing object stores were blown away.
// ---

function test() {
  request = indexedDB.open('database-basics');
  request.onupgradeneeded = upgradeNeeded;
  request.onsuccess = onSuccess;
  request.onerror = unexpectedErrorCallback;
  request.onblocked = unexpectedBlockedCallback;
}

var gotUpgradeNeeded = false;
function upgradeNeeded(evt) {
  event = evt;
  shouldBe("event.dataLoss", "'total'");
  gotUpgradeNeeded = true;
}

function onSuccess(event) {
  db = event.target.result;
  debug("The pre-existing leveldb has an objectStore in 'database-basics',");
  debug("ensure that it was blown away");
  shouldBe("db.objectStoreNames.length", "0");
  debug("We should have gotten an upgradeneeded event because the new empty");
  debug("database doesn't have a version.");
  shouldBeTrue("gotUpgradeNeeded");
  done();
}
