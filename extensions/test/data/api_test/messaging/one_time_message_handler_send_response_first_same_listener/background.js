// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background listener that responds then throws a sync error
// summary: Service worker fixture registering a runtime.onMessage listener that sends a response and then throws a synchronous error, exercising the one-time messaging handler.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  sendResponse('response from listener');
  throw new Error('sync error');
});
