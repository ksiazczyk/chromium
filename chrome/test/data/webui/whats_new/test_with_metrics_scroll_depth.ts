// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: What's New scroll depth metrics test fixture
// summary: Test fixture that posts a scroll event with a 25 percent scroll depth to the What's New page for metrics testing.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

window.onload = function() {
  assertTrue(!!window.top);

  // The user scrolled past a scroll quartile threshold.
  window.top.postMessage(
      {
        data: {
          event: 'scroll',
          percent_scrolled: '25',  // 0 || 25 || 50 || 75 || 100
        },
      },
      'chrome://whats-new/');
};
