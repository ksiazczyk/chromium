// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Autoplay test extension background script
// summary: Background script of a test extension that verifies audio autoplay is allowed without a user gesture, succeeding only when playback is not blocked by NotAllowedError.
// ---

chrome.test.runTests([
  function autoplay_allowed_without_gesture() {
    const audio = new Audio();
    audio.src = 'test.mp4';
    let allowed = false;
    audio.play()
        .then(
            function() {
              allowed = true;
            },
            function(e) {
              allowed = e.name !== 'NotAllowedError';
            })
        .then(function() {
          chrome.test.assertTrue(allowed);
          chrome.test.succeed();
        });
  },
]);
