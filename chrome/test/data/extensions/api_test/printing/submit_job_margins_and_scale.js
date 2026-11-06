// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Submit job with margins and scale test
// summary: Browser test that submits a print job using a ticket with margins and scale and asserts an OK status and a job ID.
// ---

chrome.test.getConfig(function(config) {
  const url = 'http://localhost:' + config.testServer.port + '/pdf/test.pdf';
  submitJob('id', 'test job', url, ticket_with_margins_and_scale, response => {
    chrome.test.assertNe(undefined, response);
    chrome.test.assertNe(undefined, response.status);
    chrome.test.assertEq(chrome.printing.SubmitJobStatus.OK, response.status);
    chrome.test.assertNe(undefined, response.jobId);

    chrome.test.notifyPass();
  });
});
