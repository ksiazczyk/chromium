// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Client redirect test script
// summary: Opens a new tab that navigates to a client redirect page on the local test server as part of the app launcher extension API test.
// ---

chrome.test.getConfig(function(config) {
  const redirectUrl = 'http://localhost:' + config.testServer.port +
      '/extensions/api_test/app_process/path1/client_redirect.html';
  chrome.tabs.create({
    url: redirectUrl,
  });
});
