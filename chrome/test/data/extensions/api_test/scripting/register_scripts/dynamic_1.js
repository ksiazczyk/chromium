// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dynamic content script fixture
// summary: Content script that sends a SCRIPT_INJECTED runtime message so tests can verify it was injected.
// ---

chrome.runtime.sendMessage('SCRIPT_INJECTED');
