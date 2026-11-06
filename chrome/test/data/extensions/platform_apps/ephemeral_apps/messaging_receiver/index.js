// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Messaging receiver launch notification script
// summary: Sends a 'launched' message via chrome.test.sendMessage when the receiver app page loads, signaling the app started.
// ---

onload = function() {
  chrome.test.sendMessage('launched');
};
