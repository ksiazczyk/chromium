// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Eval test for isolated world CSP bypass in MV2
// summary: Runs a Chrome extension test asserting that eval can modify window state inside an isolated world despite the main world CSP.
// ---

chrome.test.runTests([function testEval() {
  window.foo = 2;
  eval('window.foo = 3;');
  chrome.test.assertEq(3, window.foo);
  chrome.test.succeed();
}]);
