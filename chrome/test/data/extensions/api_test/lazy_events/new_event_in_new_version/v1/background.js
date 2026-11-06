// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy events test extension v1 background script
// summary: Background script of the version 1 test extension that simply signals test success via chrome.test.notifyPass().
// ---

chrome.test.notifyPass();
