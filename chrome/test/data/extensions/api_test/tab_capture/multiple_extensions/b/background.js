// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tab capture multi-extension test background script
// summary: Background script of the 'b' test extension that loads the shared tab capture multi-extension test helpers via chrome.test.loadScript.
// ---

chrome.test.loadScript(
    '_test_resources/api_test/tab_capture/multiple_extensions/common.js');
