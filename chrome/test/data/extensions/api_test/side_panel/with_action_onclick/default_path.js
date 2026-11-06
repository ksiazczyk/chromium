// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel test script sending default_path message
// summary: Script loaded by the side panel page that signals the test runner with a 'default_path' message.
// ---

chrome.test.sendMessage('default_path');
