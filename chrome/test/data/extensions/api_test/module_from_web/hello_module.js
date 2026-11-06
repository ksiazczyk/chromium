// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: hello_module.js
// summary: JavaScript module fixture for the module_from_web extension API test that exports helloModule() to signal a passing test via chrome.test.notifyPass().
// ---

export function helloModule() {
  chrome.test.notifyPass();
}
