// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser command 4 test script
// summary: Posts a browser_command event with command ID 4 to the What's New page on load to test command handling.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

window.onload = function() {
  assertTrue(!!window.top);
  window.top.postMessage(
      {
        data: {
          event: 'browser_command',
          commandId: 4,
          clickInfo: {},
        },
      },
      'chrome://whats-new/');
};
