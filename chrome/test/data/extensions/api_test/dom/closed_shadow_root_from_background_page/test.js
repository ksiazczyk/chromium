// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script accessing a closed shadow root via chrome.dom
// summary: Runs a test that attaches a closed shadow root to a host element and asserts chrome.dom.openOrClosedShadowRoot returns it with its child element.
// ---

chrome.test.runTests([function() {
  const host = document.getElementById('bghost');
  const shadowRoot1 = host.attachShadow({mode: 'closed'});
  shadowRoot1.appendChild(document.createElement('div'));

  const shadowRoot2 = chrome.dom.openOrClosedShadowRoot(host);
  chrome.test.assertEq(shadowRoot2.childElementCount, 1);
  chrome.test.succeed();
}]);
