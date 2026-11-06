// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: JS module pass helper
// summary: Exports a pass() function that calls chrome.test.succeed(), used by the background script to verify JavaScript module imports.
// ---

export function pass() {
  chrome.test.succeed();
}
