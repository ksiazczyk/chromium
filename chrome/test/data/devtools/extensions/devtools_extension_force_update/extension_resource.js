// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension resource script signaling its load
// summary: Sends the ext-resource-loaded runtime message so the background worker can notify the C++ test that the extension resource loaded.
// ---

chrome.runtime.sendMessage('ext-resource-loaded');
