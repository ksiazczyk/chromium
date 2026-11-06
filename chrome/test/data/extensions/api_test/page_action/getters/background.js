// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script signaling test pass
// summary: Background script of the test extension that immediately reports a passing test via chrome.test.notifyPass.
// ---

chrome.test.notifyPass();
