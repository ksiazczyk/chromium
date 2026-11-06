// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script signaling test completion
// summary: Script injected via chrome.tabs.executeScript that messages the background page to confirm it ran, marking the fragment navigation test as successful.
// ---

// Notify the background page that we ran.
chrome.runtime.sendMessage('execute_script');
