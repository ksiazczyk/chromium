// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test opening an existing file with a filtered suggested name
// summary: Runs a chrome.test case that chooses an entry with suggested name '%.txt' and expects it filtered to '_.txt'.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {suggestedName: '%.txt'},
        chrome.test.callbackPass(function(entry) {
          checkEntry(entry, '_.txt', false, false);
        }),
    );
  },
]);
