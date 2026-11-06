// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker checking restricted extension API bindings
// summary: Service worker that verifies only the expected chrome API keys are exposed and reports success or failure back to the page.
// ---

const expectedKeys = ['csi', 'loadTimes', 'runtime'];

self.onmessage = function(e) {
  let message = 'SUCCESS';
  if (e.data !== 'checkBindingsTest') {
    message = 'FAILURE';
  } else {
    for (const key in chrome) {
      if (!expectedKeys.includes(key)) {
        console.info(`Unexpected key: ${key}`);
        message = 'FAILURE';
        break;
      }
    }
  }
  e.ports[0].postMessage(message);
};
