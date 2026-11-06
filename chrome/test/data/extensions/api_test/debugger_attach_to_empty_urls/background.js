// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Debugger attach to empty URLs test background script
// summary: Extension background script that runs a browser test attaching the debugger to a page with empty-URL frames and then detaching.
// ---

const protocolVersion = '1.3';

chrome.test.getConfig(config => chrome.test.runTests([
  async function testDebuggerAttachToFramesWithEmptyUrls() {
    const {openTab} = await import('/_test_resources/test_util/tabs_util.js');
    const pagePath =
        'extensions/api_test/debugger_attach_to_empty_urls/page.html';
    const topURL = `http://a.com:${config.testServer.port}/${pagePath}`;
    const tab = await openTab(topURL);
    const debuggee = {tabId: tab.id};
    await new Promise(
        resolve => chrome.debugger.attach(debuggee, protocolVersion, resolve));
    chrome.test.assertNoLastError();
    chrome.debugger.detach(debuggee, chrome.test.succeed);
  },
]));
