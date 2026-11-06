// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension content script
// summary: Content script that performs an XHR against the page origin, signals 'contentscript_done', and then injects the extension's frame.html into the page.
// ---

// location.origin will be equivalent to 'http://example.com:PORT';
const baseUrl = location.origin;

chrome.test.sendMessage('contentscript_ready', function() {
  const x = new XMLHttpRequest();
  x.open('GET', baseUrl + '/extensions/test_file.txt?contentscript');
  x.onloadend = function() {
    chrome.test.assertEq('Hello!', x.responseText);

    chrome.test.sendMessage('contentscript_done', function() {
      const frame = document.createElement('iframe');
      frame.src = chrome.runtime.getURL('frame.html');
      document.body.appendChild(frame);
    });
  };
  x.send();
});
