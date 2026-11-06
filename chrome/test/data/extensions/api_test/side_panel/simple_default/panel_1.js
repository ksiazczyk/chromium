// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel test page one script
// summary: Sends a 'panel_1' message to the test harness via chrome.test when the side panel page loads.
// ---

document.body.onload = () => {
  chrome.test.sendMessage('panel_1');
};
