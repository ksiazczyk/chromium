// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script asserting fenced frame navigation events
// summary: Extension service worker that listens for webNavigation onBeforeNavigate and onCommitted events and asserts the fenced frame URL and frameType during the test.
// ---

const scriptUrl = '_test_resources/api_test/webnavigation/framework.js';
const loadScript = chrome.test.loadScript(scriptUrl);

loadScript.then(() => {
  chrome.test.sendMessage('ready', async function(response) {
    const config = await promise(chrome.test.getConfig);
    const port = config.testServer.port;
    const actual_fenced_frame_url = `https://b.test:${port}` +
        `/extensions/api_test/webnavigation/fencedFramesMappedURL/frame.html`;

    chrome.test.runTests([
      () => {
        chrome.test.listenOnce(
            chrome.webNavigation.onBeforeNavigate,
            function(details) {
              chrome.test.assertEq(details.frameType, 'fenced_frame');
              chrome.test.assertEq(details.url, actual_fenced_frame_url);
            },
        );
      },
      () => {
        chrome.test.listenOnce(
            chrome.webNavigation.onCommitted,
            function(details) {
              chrome.test.assertEq(details.frameType, 'fenced_frame');
              chrome.test.assertEq(details.url, actual_fenced_frame_url);
            },
        );
      },
    ]);

    chrome.test.sendMessage('ready');
  });
});
