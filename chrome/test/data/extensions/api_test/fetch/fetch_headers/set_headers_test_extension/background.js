// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker for the fetch headers test extension
// summary: Runs the common fetch header tests in the extension's background service worker and registers the user script used by the fetch headers API test.
// ---

import {getCommonFetchHeaderTests} from '/_test_resources/api_test/fetch/fetch_headers/fetch_common_tests.js';

globalThis.runBackgroundTests = function() {
  chrome.test.runTests(getCommonFetchHeaderTests());
};

globalThis.registerUserScript = async function() {
  await chrome.userScripts.register([{
    id: 'test_script',
    matches: ['http://127.0.0.1/fetch_from_user_script.html'],
    js: [{file: 'user_script.js'}],
  }]);
  chrome.test.sendMessage('user_script_registered');
};
