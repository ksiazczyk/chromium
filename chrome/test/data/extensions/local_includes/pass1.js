// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Classic script test include jsPass1
// summary: Defines jsPass1, a classic-script test include for extension tests that calls chrome.test.succeed() to report a passing result.
// ---

function jsPass1() {
  chrome.test.succeed();
}
