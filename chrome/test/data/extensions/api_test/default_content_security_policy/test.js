// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Default content security policy API test
// summary: Runs chrome.test assertions that inline scripts are blocked while external scripts still execute under the extension's default Content-Security-Policy.
// ---

window.externalCanary = 'Alive';

chrome.test.getConfig(function(config) {
  function inlineScriptDoesNotRun() {
    chrome.test.assertEq(window.inlineCanary, undefined);
    chrome.test.succeed();
  }

  function externalScriptDoesRun() {
    // This test is somewhat zen in the sense that if external scripts are
    // blocked, we don't be able to even execute the test harness...
    chrome.test.assertEq(window.externalCanary, 'Alive');
    chrome.test.succeed();
  }

  chrome.test.runTests([
    inlineScriptDoesNotRun,
    externalScriptDoesRun,
  ]);
});
