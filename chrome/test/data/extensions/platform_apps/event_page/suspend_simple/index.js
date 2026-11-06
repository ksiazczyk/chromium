// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app launch signal script
// summary: Signals the test harness that the app window has launched by sending the launched message on load.
// ---

onload = function() {
  chrome.test.sendMessage('launched');
};
