// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of the storage permission test extension
// summary: Background script of a test extension that reads a counter from chrome.storage.local, increments it, and stores the new value.
// ---

chrome.storage.local.get(['count'], ({count}) => {
  console.info(`Count : ${count}`);
  const newCount = count !== undefined ? count + 1 : 0;
  chrome.storage.local.set({'count': newCount}, () => {
    console.info(`New Count : ${newCount}`);
  });
});
