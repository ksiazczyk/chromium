// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onSuspend test background script
// summary: Background script for the lazy background page unload test that sends a success message when the runtime onSuspend event fires.
// ---

chrome.runtime.onSuspend.addListener(function() {
  chrome.test.sendMessage('Success');
});
