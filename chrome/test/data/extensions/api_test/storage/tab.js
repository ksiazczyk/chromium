// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Storage test verifying localStorage persistence
// summary: Runs a test asserting that a value previously stored in localStorage is still present.
// ---

chrome.test.runTests([function tab() {
  // Check that the localstorage stuff we stored is still there.
  chrome.test.assertTrue(localStorage.foo === 'bar');
}]);
