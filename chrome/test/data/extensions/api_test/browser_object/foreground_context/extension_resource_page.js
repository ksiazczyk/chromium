// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension resource page test module script
// summary: Imports the shared browser object test cases and runs them with chrome.test in the extension resource page.
// ---

import {getBrowserNamespaceTestCases} from '/_test_resources/api_test/browser_object/browser_object_common_tests.js';

chrome.test.runTests(getBrowserNamespaceTestCases());
