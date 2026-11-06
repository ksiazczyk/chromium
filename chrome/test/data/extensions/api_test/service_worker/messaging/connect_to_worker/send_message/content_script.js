// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script sending a runtime message
// summary: Test content script that sends a chrome.runtime.sendMessage with a hello message to the extension's service worker.
// ---

chrome.runtime.sendMessage({msg: 'Hello'});
