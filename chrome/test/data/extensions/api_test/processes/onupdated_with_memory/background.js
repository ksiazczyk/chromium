// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the onUpdatedWithMemory test extension
// summary: Adds a listener to chrome.processes.onUpdatedWithMemory and signals readiness so the browser test can verify task manager refresh types.
// ---

// Add a simple listener to onUpdatedWithMemory to ensure that the task
// manager's refresh types are updated correctly.
chrome.processes.onUpdatedWithMemory.addListener(function(processes) {
  console.info('Received update with memory.');
});

chrome.test.sendMessage('ready');
