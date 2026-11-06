// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script notifying the background page
// summary: Test content script that sends a greeting message to the background page so tests can confirm the script executed on matched pages.
// ---

// Let the background page know this content script executed.
chrome.runtime.sendMessage({greeting: 'hello'});
