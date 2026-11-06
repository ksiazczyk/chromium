// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app script requesting the serial permission
// summary: Signals Launched to the test runner, then requests the optional serial permission and signals PermissionRequestDone.
// ---

chrome.test.sendMessage('Launched');
chrome.permissions.request({permissions: ['serial']}, function(result) {
  chrome.test.sendMessage('PermissionRequestDone');
});
