// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menu test app launch notifier
// summary: Sends the 'Launched' test message when the app's main page is loaded.
// ---

chrome.test.sendMessage('Launched');
