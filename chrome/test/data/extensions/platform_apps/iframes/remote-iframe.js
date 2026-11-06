// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Remote iframe failure notifier
// summary: Calls chrome.test.notifyFail with the frame URL if the remote iframe loads, confirming that remote frames are blocked.
// ---

chrome.test.notifyFail('Loaded ' + window.location.href);
