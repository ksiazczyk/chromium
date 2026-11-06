// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launch page script sending the launched app test message
// summary: JavaScript run by the launch page that sends the 'launched app' message to the test harness via chrome.test.
// ---

chrome.test.sendMessage('launched app');
