// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the processes.onUpdated extension test
// summary: Background script of a test extension that registers two listeners on chrome.processes.onUpdated and signals readiness via chrome.test.sendMessage.
// ---

// Add a simple listener to onUpdated to ensure it does not conflict with the
// task manager.
chrome.processes.onUpdated.addListener(function(processes) {
  console.info('Received update.');
});

// Add a second listener to onUpdated to ensure the task manager only hears
// about one extension listener per process.
chrome.processes.onUpdated.addListener(function(processes) {
  console.info('Second listener received update.');
});

chrome.test.sendMessage('ready');
