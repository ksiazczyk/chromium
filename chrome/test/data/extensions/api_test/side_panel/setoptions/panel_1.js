// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel test script 1
// summary: Test script that sends the chrome.test message "panel_1" when the first side panel page loads.
// ---

document.body.onload = () => {
  chrome.test.sendMessage('panel_1');
};
