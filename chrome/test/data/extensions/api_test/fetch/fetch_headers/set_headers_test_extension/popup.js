// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script running fetch header tests
// summary: Popup script that dynamically imports the shared fetch header test module and runs the common tests, working around popups not being modules.
// ---

// This works-around that popups can't import because they aren't considered
// modules.
(async () => {
  const src = chrome.runtime.getURL(
      '/_test_resources/api_test/fetch/fetch_headers/fetch_common_tests.js');
  const testsImport = await import(src);
  chrome.test.runTests(testsImport.getCommonFetchHeaderTests());
})();
