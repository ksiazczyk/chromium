// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User scripts API test helper
// summary: Helper that waits for the userScripts API to be allowed before extension tests start, signalling readiness to the C++ test side.
// ---

/**
 * Waits for the userScripts API to be allowed before starting tests.
 *
 * Assumes the C++ side will intercept the 'ready' message and enable user
 * scripts for the extension before responding.
 */
export async function waitForUserScriptsAPIAllowed() {
  await chrome.test.sendMessage('ready');
  chrome.test.assertTrue(!!chrome.userScripts);
  chrome.test.succeed();
}
