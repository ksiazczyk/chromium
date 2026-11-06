// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Two-page attach test script
// summary: Attaches a chrome.action.onClicked listener from a second page and reports success, checking that no DCHECK failure occurs.
// ---

// Should not cause a DCHECK.
chrome.action.onClicked.addListener(function() {});
chrome.test.succeed();
