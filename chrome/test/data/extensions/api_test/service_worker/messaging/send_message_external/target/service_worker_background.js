// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Target extension service worker for external messaging test
// summary: Service worker background script that listens for external messages and replies, verifying cross-extension messaging between service worker extensions.
// ---

chrome.runtime.onMessageExternal.addListener(
    (request, sender, sendResponse) => {
      chrome.test.assertEq('initiator->target', request);
      sendResponse('initiator->target->initiator');
    });
