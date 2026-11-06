// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Panel script signaling its load
// summary: Sends the devtools-panel-loaded runtime message so the background worker can notify the C++ test that the DevTools panel loaded.
// ---

chrome.runtime.sendMessage('devtools-panel-loaded');
