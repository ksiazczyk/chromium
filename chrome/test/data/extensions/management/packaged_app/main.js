// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Packaged app test script
// summary: Sends the app_launched message via chrome.test when the packaged_app test extension is launched.
// ---

chrome.test.sendMessage('app_launched');
