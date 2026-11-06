// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Discovery page embeddability test script
// summary: Browser test script that fetches the remote debugger host and asserts the DevTools discovery page responds with X-Frame-Options DENY so it cannot be embedded.
// ---

var REMOTE_DEBUGGER_HOST = 'localhost:9222';

chrome.test.runTests([
  async function discoveryPageNotEmbeddable() {
    const response = await fetch(`http://${REMOTE_DEBUGGER_HOST}/`);
    chrome.test.assertEq(response.headers.get('X-Frame-Options'), 'DENY');
    chrome.test.succeed();
  }
]);
