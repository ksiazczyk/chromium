// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script opening the test page
// summary: Test extension background script that opens the localhost test page so the content script under test gets injected.
// ---

chrome.test.getConfig(function(config) {
  const testUrl =
      `http://localhost:${config.testServer.port}/extensions/test_file.html`;
  chrome.tabs.create({url: testUrl});
});
