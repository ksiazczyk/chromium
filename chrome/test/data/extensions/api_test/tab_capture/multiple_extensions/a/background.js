// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tab capture multi-extension test background script
// summary: Background script for test extension A that loads the shared common.js test resources for the tabCapture multi-extension API test.
// ---

chrome.test.loadScript(
    '_test_resources/api_test/tab_capture/multiple_extensions/common.js');
