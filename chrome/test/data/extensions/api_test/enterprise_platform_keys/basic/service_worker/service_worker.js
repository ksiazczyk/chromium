// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker loading the shared enterprise.platformKeys test script
// summary: Service worker that loads the shared common test script to start the basic enterprise.platformKeys tests and fails the test if loading errors.
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
