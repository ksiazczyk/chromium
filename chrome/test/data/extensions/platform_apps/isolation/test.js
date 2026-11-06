// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script testing cookie isolation in requests
// summary: Background test script that requests an echoheader endpoint and asserts the Cookie header is not sent with the request.
// ---

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    function testCookieNotSet() {
      var xhr = new XMLHttpRequest();
      xhr.open(
          'GET',
          'http://localhost:' + config.testServer.port + '/echoheader?Cookie',
          true);
      xhr.onload = function() {
        // Cookies should not have been passed in the request.
        chrome.test.assertEq('None', xhr.responseText);
        chrome.test.succeed();
      };
      xhr.onerror = function() {
        chrome.test.fail('Unexpected HTTP status ' + xhr.status);
      }
      xhr.send();
    }
  ]);
});
