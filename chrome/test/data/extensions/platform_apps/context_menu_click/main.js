// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menu click test app main script
// summary: Sends a 'Launched' message to the test harness when the app window loads.
// ---

chrome.test.sendMessage('Launched');
