// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for large message test
// summary: Extension background script that attempts to send a 128 MiB runtime message and passes the test when a 64 MiB size-limit error is thrown.
// ---

try {
  // Passing super-large messages should be prevented by the renderer.
  const tooLarge = 1024 * 1024 * 128;
  chrome.runtime.sendMessage('a'.repeat(tooLarge));
  chrome.test.notifyFail();
} catch (e) {
  const expected = /Message exceeded maximum allowed size of 64MiB/;
  chrome.test.assertTrue(expected.test(e.message), e.message);
  chrome.test.notifyPass();
}
