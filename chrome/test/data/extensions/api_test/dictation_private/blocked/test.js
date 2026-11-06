// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: dictationPrivate blocked API availability test
// summary: Asserts that chrome.dictationPrivate is undefined for an extension that is not allowlisted, then reports success.
// ---

// As this extension is not allowlisted, the API is not available.
chrome.test.assertTrue(chrome.dictationPrivate === undefined);
chrome.test.succeed();
