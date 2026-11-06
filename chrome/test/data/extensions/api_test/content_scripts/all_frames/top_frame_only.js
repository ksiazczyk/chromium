// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Top frame only content script message sender
// summary: Content script fixture that sends a 'top_frame_only' message so the test can verify injection restricted to the top frame.
// ---

chrome.runtime.sendMessage('top_frame_only');
