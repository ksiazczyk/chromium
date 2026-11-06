// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script activity log browser test
// summary: Runs a browser test that queries extension activities of type content_script and asserts exactly one activity is returned.
// ---

chrome.test.runTests([
  function contentScript() {
    chrome.activityLogPrivate.getExtensionActivities(
        {
          activityType: 'content_script',
        },
        (result) => {
          chrome.test.assertEq(1, result.activities.length);
          chrome.test.succeed();
        });
  },
]);
