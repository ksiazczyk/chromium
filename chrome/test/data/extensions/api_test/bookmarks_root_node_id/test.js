// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test reading the bookmarks root node ID
// summary: Reads chrome.bookmarks.ROOT_NODE_ID and sends it to the C++ test harness, which verifies it matches the expected value.
// ---

const rootId = chrome.bookmarks.ROOT_NODE_ID;

// Send the root node ID to C++. We will check it matches the expected value
// there.
chrome.test.sendMessage(rootId);
chrome.test.succeed();
