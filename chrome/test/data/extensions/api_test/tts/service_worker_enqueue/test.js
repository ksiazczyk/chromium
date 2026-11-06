// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.tts enqueue test in a service worker
// summary: Browser test that verifies chrome.tts.speak with enqueue works from an MV3 service worker using both callback-style and promise-style calls.
// ---

chrome.test.runTests([testEnqueue = async () => {
  let callbacks = 0;
  // Try synchronous callback-style API.
  chrome.tts.speak(
      'text 1', {
        'enqueue': true,
        'onEvent': event => {
          chrome.test.assertEq('end', event.type);
          chrome.test.assertEq(2, callbacks);
          callbacks++;
        },
      },
      () => {
        chrome.test.assertNoLastError();
        chrome.test.assertEq(0, callbacks);
        callbacks++;
      });
  // Try async promise-style API.
  await chrome.tts.speak('text 2', {
    'enqueue': true,
    'onEvent': event => {
      chrome.test.assertEq('end', event.type);
      chrome.test.assertEq(3, callbacks);
      chrome.test.succeed();
    },
  });
  chrome.test.assertEq(1, callbacks);
  callbacks++;
}]);
