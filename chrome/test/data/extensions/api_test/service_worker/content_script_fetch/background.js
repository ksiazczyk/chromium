// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for content script fetch API test
// summary: Test extension background script that opens the controlled page and passes the test when the content script reports a Success message over the runtime port.
// ---

chrome.runtime.onConnect.addListener(function(port) {
  chrome.test.log('got connect');
  port.onMessage.addListener(function(msg) {
    chrome.test.log(`got message: ${msg}`);
    chrome.test.assertEq('Success', msg);
    chrome.test.notifyPass();
  });
});

chrome.test.getConfig(function(config) {
  chrome.test.log('Creating tab...');
  chrome.tabs.create({
    url: `http://127.0.0.1:${config.testServer.port}/extensions/api_test/` +
        'service_worker/content_script_fetch/controlled_page/index.html',
  });
});
