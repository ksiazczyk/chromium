// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy listeners test background script
// summary: Background script for the lazy listeners extension API test that registers a chrome.tabs.onCreated listener in a non-persistent background page.
// ---

chrome.tabs.onCreated.addListener(function() {});
