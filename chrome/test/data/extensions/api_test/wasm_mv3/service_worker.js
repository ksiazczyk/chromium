// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension service worker entry
// summary: Service worker that sends a ready message and runs the WebAssembly tests once the test runner replies.
// ---

import {runTests} from './test_module.js';

chrome.test.sendMessage('ready', reply => {
  if (reply === 'go') {
    runTests();
  }
});
