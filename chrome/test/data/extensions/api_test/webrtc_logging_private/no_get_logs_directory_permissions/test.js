// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Assert getLogsDirectory is not available
// summary: Test script that fails if chrome.webrtcLoggingPrivate.getLogsDirectory exists and succeeds when the API is absent.
// ---

chrome.test.assertFalse(!!chrome.webrtcLoggingPrivate.getLogsDirectory);
chrome.test.succeed();
