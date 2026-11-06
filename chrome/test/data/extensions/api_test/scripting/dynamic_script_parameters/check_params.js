// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Check params content script
// summary: Test extension content script that reports the current chrome.scripting.globalParams value back to the extension via a runtime message.
// ---

chrome.runtime.sendMessage(
    `GLOBALPARAMS: ${JSON.stringify(chrome.scripting.globalParams)}`);
