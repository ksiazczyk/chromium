// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for version 1 test extension
// summary: Test extension background script that signals a passing test via chrome.test.notifyPass when loaded.
// ---

chrome.test.notifyPass();
