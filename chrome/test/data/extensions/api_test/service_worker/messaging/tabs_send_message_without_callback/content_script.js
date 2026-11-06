// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for tabs.sendMessage without callback test
// summary: Content script of the test extension that checks for the 'worker->tab' message and replies with 'worker->tab->worker' to complete the message round trip.
// ---

chrome.runtime.onMessage.addListener((msg) => {
  if (msg !== 'worker->tab') {
    chrome.runtime.sendMessage('failure');
    return;
  }
  chrome.runtime.sendMessage('worker->tab->worker');
});
