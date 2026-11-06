// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app page load script
// summary: Sends a 'visible' test message when the app page loads, letting tests confirm the window was shown.
// ---

onload = function() {
  chrome.test.sendMessage('visible');
};
