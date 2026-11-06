// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page context test setting the SVG icon
// summary: Runs a chrome.test case that sets the extension action icon to the SVG file and succeeds when the icon is applied from a page.
// ---

chrome.test.runTests([
  async function setIconFromPage() {
    await chrome.action.setIcon({path: 'icon.svg'});
    chrome.test.succeed();
  },
]);
