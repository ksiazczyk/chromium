// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebTransport dedicated worker test helper
// summary: Runs the WebTransport established and failed session checks inside a dedicated worker and asserts that the worker reports PASS.
// ---

async function expectSessionEstablished(url) {
  testWorker('expectSessionEstablished', url);
}

async function expectSessionFailed(url) {
  testWorker('expectSessionFailed', url);
}

async function testWorker(testName, url) {
  const worker = new Worker('webtransport_worker.js');
  worker.postMessage({test: testName, url: url});
  await new Promise((resolve) => {
    worker.onmessage = (message) => {
      worker.terminate();
      chrome.test.assertEq('PASS', message.data);
      resolve();
    };
  });
}
