// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app launch signal script
// summary: Sends the 'Launched' message via chrome.test when the minimal_id app page loads.
// ---

chrome.test.sendMessage('Launched');
