// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Remote script test for isolated world CSP bypass in MV2
// summary: Loads a remote script from the test server in an isolated world and asserts the page title it sets, failing if the load errors.
// ---

chrome.test.getConfig(config => {
  chrome.test.runTests([function testRemoteScript() {
    const port = config.testServer.port;
    const script = document.createElement('script');
    script.src = `http://google.com:${port}/script.js`;
    script.onload = () => {
      chrome.test.assertEq('New Title', document.title);
      chrome.test.succeed();
    };
    script.onerror = () => {
      chrome.test.fail('Script load failed unexpectedly');
    };
    document.body.appendChild(script);
  }]);
});
