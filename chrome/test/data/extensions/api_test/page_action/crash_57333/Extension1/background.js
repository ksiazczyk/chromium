// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of the page action crash test extension
// summary: Creates a context menu item in the test extension used to reproduce the page action crash.
// ---

chrome.contextMenus.create(
    {id: 'foo', type: 'normal', title: 'untitled', contexts: ['all']});
