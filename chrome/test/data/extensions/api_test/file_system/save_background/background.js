// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.fileSystem save from background page test
// summary: Runs a test asserting that chrome.fileSystem.chooseEntry with type saveFile fails with an invalid calling page error when invoked from a background page.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'saveFile'},
        chrome.test.callbackFail(
            'Invalid calling page. This function can\'t be called from a ' +
                'background page.',
            function(entry) {}));
  },
]);
