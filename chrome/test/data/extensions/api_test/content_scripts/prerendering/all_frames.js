// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: All frames content script test helper
// summary: Content script injected into all frames that reports its injection to the extension by sending an 'all_frames' runtime message.
// ---

chrome.runtime.sendMessage('all_frames');
