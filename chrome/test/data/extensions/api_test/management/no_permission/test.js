// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Management API permission warnings test
// summary: Browser test that calls chrome.management.getPermissionWarningsByManifest and asserts the expected warning for the clipboardRead permission.
// ---

const tests = [
  function permissionWarnings() {
    const manifestStr = `{
           "name": "Clipboard!",
           "version": "1.0",
           "manifest_version": 2,
           "permissions": ["clipboardRead"]
         }`;

    chrome.management.getPermissionWarningsByManifest(
        manifestStr, chrome.test.callback(function(warnings) {
          chrome.test.assertEq(1, warnings.length);
          chrome.test.assertEq('Read data you copy and paste', warnings[0]);
        }));
  },
];

chrome.test.runTests(tests);
