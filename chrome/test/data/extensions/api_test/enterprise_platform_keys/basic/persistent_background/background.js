// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Persistent background test loader script
// summary: Background script for the test extension that loads the shared enterprise platform keys test script and reports a failure if loading it fails.
// ---

const scriptUrl =
    '_test_resources/api_test/enterprise_platform_keys/basic/common.js';

chrome.test.loadScript(scriptUrl)
    .then(function() {
      // The script will start the tests, so nothing to do here.
    })
    .catch(function(error) {
      chrome.test.fail(scriptUrl + ' failed to load');
    });
