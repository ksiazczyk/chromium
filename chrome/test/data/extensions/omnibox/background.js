// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Omnibox test extension background script
// summary: Background script for a test extension that registers a listener on chrome.omnibox.onInputEntered to support omnibox keyword testing.
// ---

chrome.omnibox.onInputEntered.addListener(function(text) {});
