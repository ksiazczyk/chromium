// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dispatch event test app background script
// summary: Background script that listens for app launch, restart, alarm, and install events and reports each to the test harness via messages.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('index.html', {});
});

chrome.app.runtime.onRestarted.addListener(function() {
  chrome.test.sendMessage('restarted');
});

chrome.alarms.onAlarm.addListener(function(alarmInfo) {
  chrome.test.sendMessage('alarm_received');
});

chrome.runtime.onInstalled.addListener(function() {
  chrome.test.sendMessage('installed');
});
