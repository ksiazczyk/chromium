// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// ---docerion
// type: test
// title: Content script notifying the background to show the page action
// summary: Content script injected into http and https pages that sends a feedIcon message so the background script enables the page action icon.
// ---

// Notify the extension needs to show the page action icon.
chrome.runtime.sendMessage({msg: 'feedIcon'});
