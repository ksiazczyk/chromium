// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Promise-based submitJob API test
// summary: Browser test that submits a print job via the promise-based chrome.printing API using a minimal ticket and asserts the response status and job ID.
// ---

chrome.test.getConfig(async function(config) {
  const url = `http://localhost:${config.testServer.port}/pdf/test.pdf`;
  const response =
      await submitJobPromise('id', 'test job', url, minimal_ticket);
  chrome.test.assertTrue(!!response);
  chrome.test.assertEq(chrome.printing.SubmitJobStatus.OK, response.status);
  chrome.test.assertTrue(!!response.jobId);

  chrome.test.notifyPass();
});
