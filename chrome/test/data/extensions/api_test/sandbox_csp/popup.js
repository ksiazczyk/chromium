// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: executeScript test for the sandbox CSP extension
// summary: Uses chrome.test to verify that chrome.tabs.executeScript runs code on the active tab without producing a runtime error.
// ---

chrome.test.runTests([
  function checkExecuteScript() {
    chrome.tabs.query({active: true, currentWindow: true}, tabs => {
      chrome.tabs.executeScript(
          tabs[0].id,
          {code: 'const x = 1;'},
          () => {
            const lastError = chrome.runtime.lastError;
            if (lastError) {
              chrome.test.fail();
            } else {
              chrome.test.succeed();
            }
          },
      );
    });
  },
]);
