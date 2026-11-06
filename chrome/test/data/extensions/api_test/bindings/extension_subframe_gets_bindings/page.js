// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Subframe bindings test script
// summary: Test script asserting that the chrome.windows and chrome.tabs bindings are available in the extension subframe before reporting success.
// ---

chrome.test.assertTrue(!!chrome.windows);
chrome.test.assertTrue(!!chrome.tabs);
chrome.test.succeed();
