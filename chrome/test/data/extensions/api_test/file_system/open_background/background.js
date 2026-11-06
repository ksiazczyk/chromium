// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page fileSystem chooseEntry failure test
// summary: Browser test script asserting that chrome.fileSystem.chooseEntry fails with an invalid calling page error when invoked from a background page.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(chrome.test.callbackFail(
        'Invalid calling page. This function can\'t be called from a ' +
            'background page.',
        function(entry) {}));
  },
]);
