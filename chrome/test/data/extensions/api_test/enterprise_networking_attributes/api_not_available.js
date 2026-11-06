// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: API not available test script
// summary: Asserts that the enterprise.networkingAttributes API is not exposed and notifies the test pass.
// ---

chrome.test.assertTrue(
    !chrome.enterprise || !chrome.enterprise.networkingAttributes);
chrome.test.notifyPass();
