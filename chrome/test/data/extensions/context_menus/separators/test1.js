// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Separator test creating items without a parent
// summary: Creates a set of context menu items with no explicit parent and signals when creation has finished.
// ---

// Create a bunch of items with no explicit parent.
createTestSet(null, function() {
  chrome.test.sendMessage('test1 create finished');
});
