// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker creating the main context menu
// summary: Creates a context menu titled 'back' from the extension background service worker and signals test success.
// ---

chrome.contextMenus.create(
    {title: 'back', id: 'main'}, chrome.test.notifyPass());
