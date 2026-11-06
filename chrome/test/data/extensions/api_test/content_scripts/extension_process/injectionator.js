// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ping content script for the extension process test
// summary: Content script injected into all frames that sends a ping message to the extension background to signal that it was injected.
// ---

chrome.runtime.sendMessage('ping');
