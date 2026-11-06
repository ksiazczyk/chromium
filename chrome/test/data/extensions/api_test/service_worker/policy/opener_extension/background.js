// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Opener extension background script for persistent port test
// summary: Connects to another extension via a persistent port and sends a test message when the port disconnects.
// ---

// Connects to another extension via a persistent port.
const port = chrome.runtime.connect('eagjmgdicfmccfhiiihnaehbfheheidk');

port.onDisconnect.addListener(() => {
  chrome.test.sendMessage('Persistent port disconnected');
});
