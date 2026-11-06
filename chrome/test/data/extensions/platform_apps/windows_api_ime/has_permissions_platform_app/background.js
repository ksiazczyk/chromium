// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for IME window option tests
// summary: Runs chrome.app.window.create tests that expect setting the ime option to fail for a platform app that has the app.window.ime permission, while omitting the option succeeds.
// ---

var error = "The \"ime\" option is not supported for platform app.";

function testImeEnabled(setOption, opt_setValue) {
  var createOptions = { frame: 'none' };
  if (setOption) {
    createOptions.ime = opt_setValue;
    chrome.app.window.create('index.html',
                             createOptions,
                             chrome.test.callbackFail(error));
  } else {
    chrome.app.window.create('index.html',
                             createOptions,
                             chrome.test.callbackPass(function(win){
    }));
  }
}

// All these tests are run with app.window.ime permission set and on a system
// with ime window support.
chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.runTests([
    // Window is created with ime explicitly set by platform app.
    // Expect fail.
    function testImeEnabledPermissionWithPlatformApp() {
      testImeEnabled(true, true);
      testImeEnabled(true, false);
    },

    // Window is created with ime not explicitly set.
    // Expect pass.
    function testImeEnabledPermissionImeNoInit() {
      testImeEnabled(false);
    }
  ]);
});
