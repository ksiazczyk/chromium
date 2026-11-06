// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension frame script
// summary: Script running inside frame.html that issues an XHR using the frame's ancestor origin, asserts the response, and signals 'framescript_done'.
// ---

// |baseUrl| will be equivalent to 'http://example.com:PORT';
const baseUrl = location.ancestorOrigins[0];

const x = new XMLHttpRequest();
x.open('GET', baseUrl + '/extensions/test_file.txt?framescript');
x.onloadend = function() {
  // Sanity check.
  chrome.test.assertEq('Hello!', x.responseText);

  chrome.test.sendMessage('framescript_done');
};
x.send();
