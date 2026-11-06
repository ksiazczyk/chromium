// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dispatch event test app page script
// summary: Sends the 'launched' test message to the test harness when the test app page loads.
// ---

onload = function() {
  chrome.test.sendMessage('launched');
};
