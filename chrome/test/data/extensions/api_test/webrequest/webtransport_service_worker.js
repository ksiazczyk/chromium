// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebTransport service worker test helper
// summary: Runs the WebTransport established and failed session checks through a registered service worker and asserts a PASS result.
// ---

// This is used to distinguish tests for service workers.
self.isServiceWorkerTest = true;

async function expectSessionEstablished(url) {
  testWorker('expectSessionEstablished', url);
}

async function expectSessionFailed(url) {
  testWorker('expectSessionFailed', url);
}

async function testWorker(testName, url) {
  await navigator.serviceWorker.register('webtransport_worker.js');
  const registration = await navigator.serviceWorker.ready;
  const serviceWorker = registration.active;
  serviceWorker.postMessage({test: testName, url: url});
  await new Promise((resolve) => {
    serviceWorker.onmessage = (message) => {
      chrome.test.assertEq('PASS', message.data);
      resolve();
    };
  });
}
