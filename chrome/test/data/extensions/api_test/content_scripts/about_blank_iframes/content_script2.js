// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that must never run
// summary: Content script registered for about:blank frames that sends a failure message if it is ever executed.
// ---

chrome.runtime.sendMessage('This content script should never be executed.');
