// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background listener that throws a synchronous error
// summary: Service worker registering a runtime.onMessage listener that throws a synchronous error, providing the erroring handler exercised by the messaging test.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error');
});
