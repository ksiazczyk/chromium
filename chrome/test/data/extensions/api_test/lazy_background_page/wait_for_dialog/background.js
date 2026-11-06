// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for lazy background page dialog test
// summary: Background script of the wait_for_dialog test extension that calls alert on install to verify lazy background pages stay alive while a dialog is open.
// ---

chrome.runtime.onInstalled.addListener(function(details) {
  alert('hello');
});
