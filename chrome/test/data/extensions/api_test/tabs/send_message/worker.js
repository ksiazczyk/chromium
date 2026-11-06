// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker running chrome.tabs.sendMessage tests
// summary: Test service worker that opens a test tab and checks chrome.tabs.sendMessage responses using both callback and promise styles.
// ---

import {openTab} from '/_test_resources/test_util/tabs_util.js';

// A test tab which has the listener we are sending messages to injected as a
// content script.
let testTab = null;

chrome.test.runTests([
  async function setup() {
    const config = await chrome.test.getConfig();
    const url = `http://example.com:${config.testServer.port}/empty.html`;
    testTab = await openTab(url);
    chrome.test.succeed();
  },

  function sendMessageWithCallback() {
    chrome.tabs.sendMessage(testTab.id, 'ping', (response) => {
      chrome.test.assertNoLastError();
      chrome.test.assertEq('pong', response.message);
      chrome.test.assertEq(self.location.href, response.senderUrl);
      chrome.test.succeed();
    });
  },

  async function sendMessageWithPromise() {
    const response = await chrome.tabs.sendMessage(testTab.id, 'ping');
    chrome.test.assertEq('pong', response.message);
    chrome.test.assertEq(self.location.href, response.senderUrl);
    chrome.test.succeed();
  },
]);
