// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for crash 57333 test extension
// summary: Background script of the test extension that creates a context menu item, used in the page action crash 57333 API test.
// ---

chrome.contextMenus.create(
    {id: 'foo', type: 'normal', title: 'untitled', contexts: ['all']});
