// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dynamic content script fixture sending SCRIPT_INJECTED
// summary: Content script fixture that signals its injection by sending a SCRIPT_INJECTED runtime message during the getRegisteredContentScripts API test.
// ---

chrome.runtime.sendMessage('SCRIPT_INJECTED');
