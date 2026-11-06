// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: API not available test script
// summary: Browser test asserting that chrome.printingMetrics is unavailable and reporting success when the check passes.
// ---

chrome.test.assertTrue(!chrome.printingMetrics);
chrome.test.succeed();
