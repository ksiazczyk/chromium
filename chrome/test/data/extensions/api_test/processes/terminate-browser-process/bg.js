// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for cannot-terminate-browser-process test
// summary: Extension test background script that gets the browser process info and asserts that terminating process 0 fails with a not-allowed error.
// ---

const fail = chrome.test.callbackFail;
const pass = chrome.test.callbackPass;

function terminateBrowserProcess() {
  chrome.processes.getProcessInfo(
      0, false, pass(function(info) {
        chrome.test.assertEq('browser', info[0].type);
        const error = 'Not allowed to terminate process: 0.';
        chrome.processes.terminate(0, fail(error, function() {}));
      }));
}

chrome.test.runTests([terminateBrowserProcess]);
