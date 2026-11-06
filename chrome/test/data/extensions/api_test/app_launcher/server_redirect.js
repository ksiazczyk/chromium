// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Server redirect test script
// summary: Opens a new tab that follows a server redirect to an app page on the local test server as part of the app launcher extension API test.
// ---

chrome.test.getConfig(function(config) {
  const appUrl = 'http://localhost:' + config.testServer.port +
      '/extensions/api_test/app_process/path1/empty.html';
  const redirectUrl = 'http://localhost:' + config.testServer.port +
      '/server-redirect?' + appUrl;
  chrome.tabs.create({
    url: redirectUrl,
  });
});
