// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page test for blob URL fetching from content scripts
// summary: Background page script that creates a blob URL on request from the content script and passes the test when the fetched payload is returned.
// ---

// We load a page that our content script runs in. The content script responds
// asking the background page (i.e., this page) to generate a blob: URL in the
// chrome-extension:// origin. This URL is sent back to the content script,
// which attempts to fetch it.
chrome.test.runTests([
  // Tests receiving a request from a content script and responding.
  function testBlobUrlFromContentScript() {
    chrome.extension.onMessage.addListener(function(
        request, sender, sendResponse) {
      if (request === 'kindly_reply_with_blob_url') {
        const blobUrl = URL.createObjectURL(new Blob(['success_payload']));
        sendResponse(blobUrl);
      } else if (request === 'success_payload') {
        chrome.test.succeed();
      } else {
        chrome.test.fail(`Unexpected request: ${JSON.stringify(request)}`);
      }
    });
  },
]);

chrome.test.getConfig(function(config) {
  chrome.test.log('Creating tab...');

  const testUrl =
      `http://localhost:${config.testServer.port}/extensions/test_file.html`;

  chrome.tabs.create({url: testUrl});
});
