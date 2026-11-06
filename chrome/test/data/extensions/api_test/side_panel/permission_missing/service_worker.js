// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel permission missing test service worker
// summary: Service worker that runs a test asserting chrome.sidePanel is undefined when the side panel permission is missing.
// ---

chrome.test.runTests([
  async function all() {
    chrome.test.assertEq(undefined, chrome.sidePanel);
    chrome.test.succeed();
  },
]);
