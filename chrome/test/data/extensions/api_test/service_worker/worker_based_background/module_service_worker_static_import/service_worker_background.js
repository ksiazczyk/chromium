// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background test script
// summary: Module service worker that statically imports the pass helper from module.js and runs a Chrome test verifying static imports work.
// ---

// TODO(ghazale): There's no good way of checking that the import
// succeeds, so in the failure case the test just times out, rather than
// giving a useful error.
import {pass as jsPass} from '/module.js';

chrome.test.runTests([
  function jsModule() {
    jsPass();
  },
]);
