// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: What's New module click metrics test
// summary: Simulates a user clicking an external link in a module and posts the link click metrics event to the What's New page.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

window.onload = function() {
  assertTrue(!!window.top);

  // The user clicks a link in a module.
  window.top.postMessage(
      {
        data: {
          event: 'general_link_click',
          link_text: 'Google Search',
          link_type: 'external',
          link_url: 'https://google.com',
          module_name: '100-feature-with-link',
          section: 'spotlight',
          order: '1',
        },
      },
      'chrome://whats-new/');
};
