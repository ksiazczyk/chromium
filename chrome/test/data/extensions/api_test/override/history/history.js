// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: History override page script
// summary: Script loaded by the overridden history page that logs its load and notifies test success via chrome.test.notifyPass.
// ---

console.info('Overridden history page loaded.');
chrome.test.notifyPass();
