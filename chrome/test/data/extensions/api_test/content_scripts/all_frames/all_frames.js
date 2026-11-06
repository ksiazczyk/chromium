// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: All frames content script message sender
// summary: Content script fixture that sends an 'all_frames' message to the extension background so the test can verify injection into every frame.
// ---

chrome.runtime.sendMessage('all_frames');
