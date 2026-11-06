// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for chrome updates non-listener test
// summary: Test extension background script that immediately reports a passing result via chrome.test.notifyPass, serving as the fixture for the lazy events chrome updates non-listener API test.
// ---

chrome.test.notifyPass();
