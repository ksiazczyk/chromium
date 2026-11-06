// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Module test include jsPass2
// summary: Exports jsPass2, a module-based test include for extension tests that calls chrome.test.succeed() to report a passing result.
// ---

export function jsPass2() {
  chrome.test.succeed();
}
