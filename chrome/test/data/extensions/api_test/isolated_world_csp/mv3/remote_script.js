// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MV3 isolated world CSP remote script test
// summary: Injects a remote script from the test server and expects the load to fail under the MV3 isolated world Content Security Policy.
// ---

chrome.test.getConfig(config => {
  const port = config.testServer.port;

  const script = document.createElement('script');
  script.src = `http://example.com:${port}/script.js`;
  script.onload = () => {
    chrome.test.notifyFail('Script load succeeded unexpectedly');
  };
  script.onerror = () => {
    chrome.test.notifyPass();
  };

  document.body.appendChild(script);
});
