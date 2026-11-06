// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: What's New nav click metrics test script
// summary: Test script that posts a nav_click metric event to the What's New page when loaded.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

window.onload = function() {
  assertTrue(!!window.top);
  window.top.postMessage(
      {
        data: {
          event: 'nav_click',
        },
      },
      'chrome://whats-new/');
};
