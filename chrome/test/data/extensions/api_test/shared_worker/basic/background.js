// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker API test background script
// summary: Runs extension API tests that connect to worker.js and worker-with-import.js as shared workers and verify they reply with the expected message.
// ---

chrome.test.runTests([
  function worker() {
    const workerPort = new SharedWorker('worker.js').port;
    workerPort.onmessage = (evt) => {
      if (evt.data !== 'hullo there!') {
        chrome.test.fail();
      } else {
        chrome.test.succeed();
      }
    };
    workerPort.start();
  },

  function workerWithImport() {
    const workerPort = new SharedWorker('worker-with-import.js').port;
    workerPort.onmessage = (evt) => {
      if (evt.data !== 'hullo there!') {
        chrome.test.fail();
      } else {
        chrome.test.succeed();
      }
    };
    workerPort.start();
  },
]);
