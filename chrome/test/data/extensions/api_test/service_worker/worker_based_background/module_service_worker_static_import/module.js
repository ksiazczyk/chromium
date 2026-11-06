// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Module exporting test pass helper
// summary: JavaScript module exporting a pass function that signals test success via chrome.test and is statically imported by the service worker.
// ---

export function pass() {
  chrome.test.succeed();
}
