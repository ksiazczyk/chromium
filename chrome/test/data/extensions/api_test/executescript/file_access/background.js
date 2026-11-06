// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the executeScript file access test
// summary: Runs a browser test that injects a script into a file URL tab and asserts success or a permission error depending on the allowed custom argument.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    function canExecuteScriptInFileURLs() {
      chrome.test.assertTrue(
          config.customArg === 'ALLOWED' || config.customArg === 'DENIED');
      const canExecuteScript = config.customArg === 'ALLOWED';

      // Only a single tab should be opened currently. A file url should be
      // opened in it.
      chrome.tabs.query({}, function(tabs) {
        chrome.test.assertEq(1, tabs.length);
        const url = new URL(tabs[0].url);
        chrome.test.assertEq('file:', url.protocol);

        // Inject a script into this tab.
        chrome.tabs.executeScript(
            tabs[0].id, {code: `console.log('injected');`}, function() {
              if (canExecuteScript) {
                chrome.test.assertTrue(chrome.runtime.lastError === undefined);
              } else {
                const expectedError = `Cannot access contents of url "${
                                          tabs[0].url}". Extension ` +
                    `manifest must request permission to access this host.`;
                chrome.test.assertEq(
                    expectedError, chrome.runtime.lastError.message);
              }
              chrome.test.succeed();
            });
      });
    },
  ]);
});
