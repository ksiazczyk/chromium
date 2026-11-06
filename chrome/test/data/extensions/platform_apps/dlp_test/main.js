// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DLP test app launch message script
// summary: Sends the 'Launched' message via chrome.test once the DLP test app page has loaded.
// ---

chrome.test.sendMessage('Launched');
