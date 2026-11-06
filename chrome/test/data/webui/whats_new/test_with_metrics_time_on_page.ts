// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: What's New time on page metrics test fixture
// summary: Test fixture that posts a time-on-page event of 3000 milliseconds to the What's New page when navigating away.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

window.onload = function() {
  assertTrue(!!window.top);

  // Total time spent on page. Emitted when user tries to navigate away.
  window.top.postMessage(
      {
        data: {
          event: 'time_on_page_ms',
          time: 3000,  // milliseconds
        },
      },
      'chrome://whats-new/');
};
