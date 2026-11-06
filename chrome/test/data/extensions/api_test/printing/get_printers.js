// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Get printers API test
// summary: Browser test asserting that chrome.printing.getPrinters returns exactly one printer with the expected name.
// ---

function testGetPrinters(expectedName) {
  chrome.test.runTests([() => {
    chrome.printing.getPrinters(printers => {
      chrome.test.assertEq(1, printers.length);
      chrome.test.assertEq(expectedName, printers[0].name);
      chrome.test.succeed();
    });
  }]);
}

testGetPrinters('name');
