// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script for early event dispatch test
// summary: Service worker script that verifies it runs in a ServiceWorkerGlobalScope and reports PASS or FAIL back to the test.
// ---

const isInstanceOfServiceWorkerGlobalScope =
    ('ServiceWorkerGlobalScope' in self) &&
    (self instanceof ServiceWorkerGlobalScope);

if (!isInstanceOfServiceWorkerGlobalScope) {
  chrome.test.sendMessage('FAIL');
} else {
  chrome.test.onMessage.addListener(
      args => chrome.test.sendMessage(args.data === 'hello' ? 'PASS' : 'FAIL'));
}
