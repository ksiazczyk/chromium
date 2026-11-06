// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Notification settings test app page script
// summary: Sends the 'launched' message via chrome.test.sendMessage once the test app page has loaded.
// ---

onload = function() {
  chrome.test.sendMessage('launched');
};
