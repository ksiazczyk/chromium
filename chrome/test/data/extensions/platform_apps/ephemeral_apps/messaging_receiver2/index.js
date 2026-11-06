// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Messaging receiver test app launch notifier
// summary: Sends a 'launched' message via chrome.test.sendMessage when the app page loads, signalling app startup to the test harness.
// ---

onload = function() {
  chrome.test.sendMessage('launched');
};
