// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script testing chrome.dom shadow root access
// summary: Content script for an extension API test that verifies chrome.dom.openOrClosedShadowRoot returns a closed shadow root and throws for non-HTMLElement arguments.
// ---

chrome.test.runTests([function() {
  const host = document.getElementById('host');
  const shadowRoot = chrome.dom.openOrClosedShadowRoot(host);
  chrome.test.assertEq(shadowRoot.childElementCount, 2);
  // Verify `chrome.dom.openOrClosedShadowRoot` throws when passed a
  // non-HTMLElement object.
  chrome.test.assertThrows(
      chrome.dom.openOrClosedShadowRoot.bind(null, /* element */ new Object()),
      /* expectedError */
      'Error in invocation of dom.openOrClosedShadowRoot(HTMLElement ' +
          'element): ');
  chrome.test.succeed();
}]);
