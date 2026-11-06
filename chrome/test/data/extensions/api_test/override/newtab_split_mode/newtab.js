// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: New tab override test script
// summary: Script loaded by the override page that signals the browser test passed via chrome.test.notifyPass.
// ---

chrome.test.notifyPass();
