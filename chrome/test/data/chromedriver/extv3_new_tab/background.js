// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Chromedriver test extension background script
// summary: Background script of a test extension that opens a new browser tab when the extension loads, used as chromedriver test data.
// ---

chrome.tabs.create({url: "chrome://newtab"});
