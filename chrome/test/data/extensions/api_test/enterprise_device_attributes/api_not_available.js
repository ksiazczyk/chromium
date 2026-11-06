// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting the deviceAttributes API is unavailable
// summary: Browser test script that asserts chrome.enterprise.deviceAttributes is absent and reports success.
// ---

chrome.test.assertTrue(
    !chrome.enterprise || !chrome.enterprise.deviceAttributes);
chrome.test.notifyPass();
