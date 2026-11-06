// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// History api test for Chrome.
// browser_tests.exe --gtest_filter=HistoryApiTest.Incognito

// ---docerion
// type: test
// title: History API incognito browser test script
// summary: Test script for the chrome.history API browser test that adds and counts history entries and reports whether it runs in an incognito context.
// ---

function addItem() {
  chrome.history.addUrl({url: 'http://www.a.com/'}, function() {
    chrome.test.sendScriptResult('success');
  });
}

function countItemsInHistory() {
  const query = {text: ''};
  chrome.history.search(query, function(results) {
    chrome.test.sendScriptResult(results.length.toString());
  });
}

// Return a message to sync test with page load.
const message =
    chrome.extension.inIncognitoContext ? 'incognito ready' : 'regular ready';
chrome.test.sendMessage(message);
