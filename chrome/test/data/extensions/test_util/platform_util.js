// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Platform utility for extension tests
// summary: Provides an isAndroid() helper that reports whether the current platform is Android, for use in extension tests.
// ---

/**
 * Returns whether the current platform is Android. Useful because the user
 * agent for desktop Android is still in flux.
 * @return {boolean} Whether the current platform is Android.
 */
async function isAndroid() {
  const os = await new Promise((resolve) => {
    chrome.runtime.getPlatformInfo(info => resolve(info.os));
  });
  return os === 'android';
}
