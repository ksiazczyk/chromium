// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test for chrome.runtime.id and getURL
// summary: Service worker background script that tests chrome.runtime.id and chrome.runtime.getURL using chrome.test assertions.
// ---

const EXTENSION_ID = 'pkplfbidichfdicaijlchgnapepdginl';

chrome.test.runTests([
  function testId() {
    chrome.test.assertEq(EXTENSION_ID, chrome.runtime.id);
    chrome.test.succeed();
  },
  function testGetURL() {
    chrome.test.assertEq(
        `chrome-extension://${EXTENSION_ID}/foo`, chrome.runtime.getURL('foo'));
    chrome.test.succeed();
  },
]);
