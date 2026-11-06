// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Component platform app main script
// summary: Sends the 'Launched' message via chrome.test when the test platform app's main page loads.
// ---

chrome.test.sendMessage('Launched');
