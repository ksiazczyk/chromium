// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launch app test script
// summary: JavaScript loaded by the launch page that signals the launched app state to the test harness via chrome.test.sendMessage.
// ---

chrome.test.sendMessage('launched app');
