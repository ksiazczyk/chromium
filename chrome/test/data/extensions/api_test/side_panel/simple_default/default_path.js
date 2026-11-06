// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel default path test script
// summary: Sends a 'default_path' message to the test harness via chrome.test when the default side panel page loads.
// ---

document.body.onload = () => {
  chrome.test.sendMessage('default_path');
};
