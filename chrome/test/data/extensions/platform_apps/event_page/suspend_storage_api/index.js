// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launched message sender for the suspend storage test
// summary: Sends the 'launched' message via chrome.test to the browser test harness when the app page loads.
// ---

onload = function() {
  chrome.test.sendMessage('launched');
};
