// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window script that starts the background page test
// summary: Passes its window object to the background page so the test can check binding updates in both contexts.
// ---

// Background page runs the test after we've loaded.
chrome.extension.getBackgroundPage().runTest(window);
