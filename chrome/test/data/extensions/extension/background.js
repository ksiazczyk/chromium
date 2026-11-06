// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script for a simple Chrome test extension that signals test success by calling chrome.test.notifyPass().
// ---

chrome.test.notifyPass();
