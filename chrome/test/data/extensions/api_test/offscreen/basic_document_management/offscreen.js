// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Offscreen document message reply script
// summary: Listens for runtime messages and replies so the background service worker can confirm the offscreen document exists.
// ---

chrome.runtime.onMessage.addListener((msg, sender, sendResponse) => {
  sendResponse({msg, reply: 'offscreen reply'});
});
