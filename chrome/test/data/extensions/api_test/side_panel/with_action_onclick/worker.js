// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker reporting action clicks in test
// summary: Extension service worker that listens for chrome.action.onClicked and signals the test runner with an 'action_clicked' message.
// ---

chrome.action.onClicked.addListener(() => {
  chrome.test.sendMessage('action_clicked');
});
