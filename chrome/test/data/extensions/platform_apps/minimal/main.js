// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Minimal platform app test message script
// summary: Sends the 'Launched' message via chrome.test so browser tests can detect that the app page loaded.
// ---

chrome.test.sendMessage('Launched');
