// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background test runner for iframe messaging
// summary: Background script that runs the browser test, asserts the success message from the content script and opens the test server page.
// ---

chrome.test.runTests([
  // Tests receiving a request from a content script and responding.
  function onRequest() {
    chrome.runtime.onMessage.addListener(
        function(request, sender, sendResponse) {
          chrome.test.assertTrue(request.success);
          chrome.test.succeed();
        },
    );
  },
]);

chrome.test.getConfig(function(config) {
  chrome.test.log('Creating tab...');

  const testUrl = `http://localhost:${config.testServer.port}` +
      '/extensions/test_file.html';

  chrome.tabs.create({url: testUrl});
});
