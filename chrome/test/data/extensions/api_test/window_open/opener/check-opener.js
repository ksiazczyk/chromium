// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Check opener test script
// summary: Notifies the background page via onCheckOpenerLoaded when the check-opener window loads so the test can inspect window.opener.
// ---

chrome.extension.getBackgroundPage().onCheckOpenerLoaded(window);
