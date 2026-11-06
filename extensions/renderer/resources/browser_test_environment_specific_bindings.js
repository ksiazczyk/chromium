// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser test environment binding hooks
// summary: Provides registerHooks and testDone hooks that the browser test environment uses to advance renderer tests sequentially.
// ---

function registerHooks(api) {
}

function testDone(runNextTest) {
  // Use setTimeout here to allow previous test contexts to be
  // eligible for garbage collection.
  setTimeout(runNextTest, 0);
}

exports.$set('registerHooks', registerHooks);
exports.$set('testDone', testDone);
