// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// browser_tests
// --gtest_filter=ProtocolHandlerApiTest.BrowserProcessSecurityLevelExtension

// ---docerion
// type: test
// title: Browser process security level test script
// summary: Runs the ProtocolHandlerApiTest.BrowserProcessSecurityLevelExtension browser test by nesting localhost and extension subframes and passing when the handler replies.
// ---

chrome.test.getConfig(function(config) {
  // Handle reply from handler.html
  window.addEventListener('message', function() {
    chrome.test.notifyPass();
  });

  // Set nested subframes with localhost and chrome-extension content.
  document.querySelector('iframe').addEventListener('load', function(event) {
    window.frames['localhost'].frames['chrome_extension'].location =
        chrome.runtime.getURL('handler.html');
  });
  window.frames['localhost'].location =
      crossOriginLocalhostURLFromPort(config.testServer.port) +
      'test_browser_process_security_level_subframe.html';
});
