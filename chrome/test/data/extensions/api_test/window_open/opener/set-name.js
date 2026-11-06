// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Set name test script
// summary: Sets window.name to target-window and notifies the background page so the test can later target this window via window.open.
// ---

window.name = 'target-window';
chrome.extension.getBackgroundPage().onSetNameLoaded(window);
