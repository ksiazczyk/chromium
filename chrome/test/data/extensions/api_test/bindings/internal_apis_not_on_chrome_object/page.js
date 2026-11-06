// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Assertions that internal APIs are absent from chrome object
// summary: Test script asserting that internal APIs such as downloadsInternal, events, fileBrowserHandlerInternal, webRequestInternal, and webview are not exposed on the chrome object.
// ---

chrome.test.assertFalse(chrome.hasOwnProperty('downloadsInternal'));
chrome.test.assertFalse(chrome.hasOwnProperty('events'));
chrome.test.assertFalse(chrome.hasOwnProperty('fileBrowserHandlerInternal'));
chrome.test.assertFalse(chrome.hasOwnProperty('webRequestInternal'));
chrome.test.assertFalse(chrome.hasOwnProperty('webview'));
chrome.test.succeed();
