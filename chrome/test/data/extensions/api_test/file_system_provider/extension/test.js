// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: fileSystemProvider mount test from an extension
// summary: Browser test that mounts a file system through chrome.fileSystemProvider from an extension and reports success.
// ---

'use strict';

chrome.test.runTests([
  // Tests if mounting succeeds when invoked from an extension. Note that all
  // other tests are implemented as apps.
  function mount() {
    chrome.fileSystemProvider.mount(
        {fileSystemId: 'file-system-id', displayName: 'file-system-name'},
        chrome.test.callbackPass());
  },
]);
