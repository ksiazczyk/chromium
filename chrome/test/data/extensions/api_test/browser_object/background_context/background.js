// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser object background context test script
// summary: Runs shared browser object namespace test cases via chrome.test in an extension background service worker context.
// ---

import {getBrowserNamespaceTestCases} from '/_test_resources/api_test/browser_object/browser_object_common_tests.js';

chrome.test.runTests(getBrowserNamespaceTestCases());
