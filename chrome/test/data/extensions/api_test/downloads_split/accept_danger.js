// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Accept dangerous downloads test script
// summary: Searches all downloads and calls chrome.downloads.acceptDanger on every in-progress item whose danger is neither safe nor already accepted.
// ---

chrome.downloads.search({}, function(items) {
  for (let i = 0; i < items.length; ++i) {
    if (items[i].state === 'in_progress' && items[i].danger !== 'safe' &&
        items[i].danger !== 'accepted') {
      console.info(items[i].id);
      chrome.downloads.acceptDanger(items[i].id);
    }
  }
});
