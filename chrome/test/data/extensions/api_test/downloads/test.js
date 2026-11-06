// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Downloads API test script
// summary: Service worker test that fails unless the chrome.downloads API exposes all expected methods and events.
// ---

function containsAll(obj, keys) {
  for (let i = 0; i < keys.length; ++i) {
    if (!obj[keys[i]]) {
      return false;
    }
  }
  return true;
}

const contents = [
  'download',
  'search',
  'pause',
  'resume',
  'cancel',
  'getFileIcon',
  'open',
  'show',
  'erase',
  'acceptDanger',
  'onCreated',
  'onChanged',
  'onErased',
  'onDeterminingFilename',
];

if (!chrome.downloads || !containsAll(chrome.downloads, contents)) {
  chrome.test.fail();
} else {
  chrome.test.succeed();
}
