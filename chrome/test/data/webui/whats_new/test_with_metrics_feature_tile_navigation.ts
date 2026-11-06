// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: What's New feature tile navigation metrics test
// summary: Posts a feature tile navigation metrics event to the What's New page on load.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

window.onload = function() {
  assertTrue(!!window.top);
  window.top.postMessage(
      {
        data: {
          event: 'feature_tile_navigation',
        },
      },
      'chrome://whats-new/');
};
