// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel test pass script
// summary: Script loaded by the side panel page that signals test success to the Chrome test runner via chrome.test.notifyPass.
// ---

chrome.test.notifyPass();
