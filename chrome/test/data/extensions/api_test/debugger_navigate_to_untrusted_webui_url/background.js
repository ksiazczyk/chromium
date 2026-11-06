// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Debugger API test for navigation to untrusted WebUI URLs
// summary: Browser test background script that attaches the debugger to a tab and asserts that a Page.navigate command to a privileged untrusted WebUI scheme fails with the expected error.
// ---

const protocolVersion = '1.3';

chrome.test.runTests([async function testNavigationToUntrustedWebUIUrl() {
  const {openTab} = await import('/_test_resources/test_util/tabs_util.js');
  const tab = await openTab('about:blank');
  const debuggee = {tabId: tab.id};
  await new Promise(
      resolve => chrome.debugger.attach(debuggee, protocolVersion, resolve));

  await new Promise(
      resolve => chrome.debugger.sendCommand(
          debuggee, 'Page.navigate', {url: 'chrome-untrusted://terminal'},
          resolve));
  chrome.test.assertLastError(JSON.stringify({
    code: -32000,
    message: 'Navigating to a URL with a privileged scheme is not allowed',
  }));

  chrome.test.succeed();
}]);
